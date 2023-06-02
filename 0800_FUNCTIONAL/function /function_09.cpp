#include <functional>
#include <iostream>


class Myclass {
public:
	void foo(int)const
	{
		std::cout << "Myclass::foo(int)const\n";
	}

	int bar(int)
	{
		std::cout << "Myclass::bar(int)\n";
		return 1;
	}
};


int main()
{
	using namespace std;

	Myclass m;

	function<void(const Myclass*, int)> f1 = &Myclass::foo;
	function<int (Myclass*, int)> f2 = &Myclass::bar;

	f1(&m, 12);
	f2(&m, 20);
	
}



