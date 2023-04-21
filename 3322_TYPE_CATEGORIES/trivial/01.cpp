#include <type_traits>


struct T1 {};

struct T2 {
    int x;
};


struct T3 : T2 { 
    T3() = default; 
    int y;
};


struct T4 {
public:
    int a;
protected: 
    int b;
private:
    int c;
};

struct T5 {
    T1 t1;
    T2 t2;
    T3 t3;
    T4 t4;
};

struct T6 {
    T1 ar_t1[10];
    T2 ar_t2[20];
};

struct T7 {
    T6 mt;
    void foo(); 
};


struct NT1 : T2 {
    virtual void f(); 
};

struct T8 {
    int x;
    static NT1 nt; // no restrictions on static members
};



struct T9 {
    T9() = default; // not user-provided
     // a regular constructor is okay because we still have default ctor
    T9(int x) : x(x) {};
    int x;
};


struct NT2 {
    NT2() : mx(42) {} 
    int mx;
};


struct NT3 {
    NT3(); // user-provided ctor
    int mval;
};


NT3::NT3() = default; 


struct NT4 {
     ~NT4(); 
};


struct T10 {
    ~T10() = default;
};


int main()
{
    using namespace std;
  
    static_assert(is_trivial_v<T1>); //Ok
    static_assert(is_trivial_v<T2>); //Ok
    static_assert(is_trivial_v<T3>); //Ok
    static_assert(is_trivial_v<T4>); //Ok
    static_assert(is_trivial_v<T5>); //Ok
    static_assert(is_trivial_v<T6>); //Ok
    static_assert(is_trivial_v<T7>); //Ok
    //static_assert(is_trivial_v<NT1>); //error
    static_assert(is_trivial_v<T8>); //Ok
    static_assert(is_trivial_v<T9>); //Ok
    //static_assert(is_trivial_v<NT2>); //error
    //static_assert(is_trivial_v<NT3>); //error
    //static_assert(is_trivial_v<NT4>); //error
    static_assert(is_trivial_v<T10>); //Ok
}
