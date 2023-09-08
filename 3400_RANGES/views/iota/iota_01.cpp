#include <iostream>
#include <ranges>

int main()
{
	auto v = std::views::iota(10, 20);
	for (auto i : v) {
		std::cout << i << ' '; //10 11 12 13 14 15 16 17 18 19
	}
}
