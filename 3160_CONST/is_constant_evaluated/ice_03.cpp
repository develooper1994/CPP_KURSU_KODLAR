#include <iostream>
#include <type_traits>

constexpr int bar(int x)
{
	if (std::is_constant_evaluated())
		return x * x;
	else
		return x * x * x;
}

int main()
{
	const int x = bar(3);
	std::cout << "x = " << x << '\n';
	
	int i = 3;
	const int y = bar(i);
	std::cout << "y = " << y << '\n';

	constexpr int a = bar(3);
	std::cout << "a = " << a << '\n';
	//constexpr int b = bar(i); //error
}
