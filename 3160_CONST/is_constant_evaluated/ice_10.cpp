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
	int x = 20;
	static int i1 = x + f_runtime(); 
	std::cout << "i1 = " << i1 << '\n'; //20
	static int i2 = x + f_constexpr(); 
	std::cout << "i2 = " << i2 << '\n'; //20
	static int i3 = x + f_consteval(); 
	std::cout << "i3 = " << i3 << '\n'; //21
}
