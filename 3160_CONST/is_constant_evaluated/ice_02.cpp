#include <iostream>
#include <type_traits>

constexpr int bar(int x)
{
	if (std::is_constant_evaluated())
		return x * x;
	else
		return x * x * x;
}

constexpr int foo(int x)
{
	return bar(x + 2);
}

int main()
{
	constexpr auto x = foo(1); 
	auto y = foo(1); 

	std::cout << "x = " << x << '\n';
	std::cout << "y = " << y << '\n';
}

