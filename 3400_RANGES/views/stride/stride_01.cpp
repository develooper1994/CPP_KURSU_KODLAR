#include <vector>
#include <ranges>
#include <iostream>

//stride C++23 
int main()
{
	using namespace std;

	std::vector vec{ 3, 1, 23, 4, 7, 9, 11, 2, 6, 5, 8, 0, 28};

	for (auto i : views::stride(vec, 2))
		cout << i << ' ';  //3 23 7 11 6 8 28

	cout << '\n';

	for (auto i : vec | views::stride(2))
		cout << i << ' ';  //3 23 7 11 6 8 28

	cout << '\n';

	std::ranges::stride_view sv{ vec ,2 };

	for (auto i : sv)
		cout << i << ' ';  //3 23 7 11 6 8 28

	cout << '\n';

	for (auto i : views::stride(vec, 3))
		cout << i << ' ';  //3 4 11 5 28

	cout << '\n';

	for (auto i : views::stride(vec, 4))
		cout << i << ' ';  //3 7 6 28

	cout << '\n';
}

