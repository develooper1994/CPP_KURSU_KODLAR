#include <iostream>

namespace nec {
  
    class A {
    public:
        A(int val) : m_val(val) {}
    private:
        int m_val;

        friend bool operator==(const A& lhs, const A& rhs)
        {
            return lhs.m_val == rhs.m_val;
        }
    };
}


namespace nec {

    class B {
    public:
        operator A() const 
        {
            return A(m_val);
        }

        B(int val) : m_val(val) {}
    private:
        int m_val;
    };
}

int main() 
{
    nec::B bx1(12), bx2(34);

    nec::A ax = bx1;
    //nec::A ax = bx1.operator nec::A();

    //if (bx1 == bx2) {  //gecersiz
    //    std::cout << "esit\n";
    //}


    if (nec::A(bx1) == bx2) { //gecerli
        std::cout << "esit\n";
    }

}
