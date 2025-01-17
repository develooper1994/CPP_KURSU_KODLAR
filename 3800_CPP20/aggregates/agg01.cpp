#include <type_traits>

struct Nec {
	int x, y;

	Nec() = default; // user declared defaulted

	int a = 23;
};

int main()
{
	Nec n1{ 1, 2 }; // Valid in C++17. Invalid in C++20 

	static_assert(std::is_aggregate_v<Nec>); //error
}
