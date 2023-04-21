#include <type_traits>

class A {
public:
	int a;
};

class B {
private:
	int b;
};

class C {
protected:
	int c;
};

constexpr auto is_ag_a = std::is_aggregate_v<A>; //true
constexpr auto is_ag_b = std::is_aggregate_v<B>; //false
constexpr auto is_ag_c = std::is_aggregate_v<C>; //false

#include <iostream>

int main()
{
	std::cout << is_ag_a << is_ag_b << is_ag_c;
}
