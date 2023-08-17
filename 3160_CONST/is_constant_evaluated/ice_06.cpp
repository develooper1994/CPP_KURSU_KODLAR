#include <type_traits>
#include <iostream>

bool f_runtime() 
{
	return std::is_constant_evaluated(); // always false
}

constexpr bool f_constexpr() 
{
	return std::is_constant_evaluated(); // may be false or true
}

consteval bool f_consteval() 
{
	return std::is_constant_evaluated(); // always true
}

int main()
{
	boolalpha(std::cout);
	bool b1 = f_runtime();		// false
	std::cout << "b1 = " << b1 << '\n';

	bool b2 = f_constexpr();	// false
	std::cout << "b2 = " << b2 << '\n';
	
	bool b3 = f_consteval();	// true
	std::cout << "b3 = " << b3 << '\n';
}