#include <iostream>


std::pair<int, double> foo();

int main()
{
	auto [i, d] = foo();

	auto f1 = [i, d]() {return i + d; }; //C++17'de gecersiz C++20'de gecerli
	auto f2 = [=]() {return i + d; }; //C++17'de gecersiz C++20'de gecerli
	auto f3 = [=]() {return i + d; }; //C++17'de gecersiz C++20'de gecerli
}
