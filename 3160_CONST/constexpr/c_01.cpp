#include <iostream>
#include <array>
#include <bitset>

constexpr int sum_square(int x, int y)
{
	return x * x + y * y;
}


int main()
{
	constexpr int a = 10;
	constexpr int b = 20;

	constexpr int c = sum_square(a, b);
	int ar[sum_square(a, b)]{}; // int ar[500]{};
	static_assert(sum_square(3, 5) == 34); 
	std::array<int, sum_square(a, b)> ar500{};
	std::bitset<sum_square(4, 5)> bs{};
}
