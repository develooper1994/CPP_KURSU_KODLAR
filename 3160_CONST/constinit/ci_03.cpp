#include <array>
#include <iostream>
#include <algorithm>

template <std::size_t N>
constexpr std::array<int, N> get_array() 
{
	return std::array<int, N>{0};
}

constinit auto g_ar = get_array<10>();

int main()
{
	for (auto i : g_ar) {
		std::cout << i << ' ';
	}

	for_each(begin(g_ar), end(g_ar), [](int& r) {++r; });

	std::cout << '\n';

	for (auto i : g_ar) {
		std::cout << i << ' ';
	}	
}
