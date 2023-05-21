#include <iostream>

class Nec {
public:
	Nec(int) {}
private:
	friend void foo(Nec)
	{
		std::cout << "friend void foo(Nec)\n";
	}
};


int main()
{
	//foo(12); //gecersiz
	foo(Nec(12)); //gecerli ADL
}
