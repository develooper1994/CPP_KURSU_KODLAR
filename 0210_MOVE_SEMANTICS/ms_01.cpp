#include <iostream>

class Myclass {
public:
	Myclass()
	{
		std::cout << "default ctor\n";
	}

	~Myclass()
	{
		std::cout << "destructor\n";
	}

	Myclass(int)
	{
		std::cout << "Myclass(int)\n";
	}

	Myclass(const Myclass&)
	{
		std::cout << "copy ctor\n";
	}

	Myclass(Myclass&&)
	{
		std::cout << "move ctor\n";
	}

	Myclass& operator=(const Myclass&)
	{
		std::cout << "copy assignment\n";
		return *this;
	}

	Myclass& operator=(Myclass&&)
	{
		std::cout << "move assignment\n";
		return *this;
	}
};



int main()
{
	Myclass m1{ 47 }; //Myclass(int);
	auto m2{ m1 }; //cc
	auto m3{ std::move(m1) }; //mc
	auto m4{ static_cast<Myclass&&>(m3) }; //mc
	m3 = m4; //copy assignment
	m3 = std::move(m4); //move assignment
}
