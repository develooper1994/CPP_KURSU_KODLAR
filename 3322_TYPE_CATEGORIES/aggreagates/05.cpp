#include <type_traits>

struct A {};

struct B {
	B() = default;
};

struct C {
	A ax;
	B bx;
};

constexpr auto is_ag_a = std::is_aggregate_v<A>;
constexpr auto is_ag_b = std::is_aggregate_v<B>; //true in C++17 false in C++20
constexpr auto is_ag_c = std::is_aggregate_v<C>;

#include <iostream>

int main()
{
	std::cout << is_ag_a << is_ag_b << is_ag_c;
}
