#include <array>
#include <iostream>

constexpr std::array<int, 4> get_array4() 
{
	return { 10, 20, 30, 40};
}

constinit auto g_ar4 = get_array4();

int main()
{
	for (auto i : g_ar4) {
		std::cout << i << ' ';
	}

	//g_ar4 is not const
	g_ar4[1]++;
	g_ar4[2] += 100;

	std::cout << '\n';

	for (auto i : g_ar4) {
		std::cout << i << ' ';
	}	
}
