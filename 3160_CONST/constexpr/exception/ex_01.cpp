#include <iostream>

constexpr double divide(int a, int b)
{
	if (0 == b) {
		throw std::overflow_error("Divide by zero");
	}
	return a / b;
}

int main()
{
	constexpr auto goodConstexpr = divide(3, 2); 
	auto badRunTime = divide(3, 0); 
}
