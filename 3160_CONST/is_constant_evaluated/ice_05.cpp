#include <type_traits>
#include <iostream>

constexpr bool is_const_eval() 
{
	return std::is_constant_evaluated();
}

int main()
{
	using namespace std;

	boolalpha(cout);

	bool b1 = is_const_eval(); // false
	cout << "b1 = " << b1 << '\n';
	const bool b2 = is_const_eval(); // true
	cout << "b2 = " << b2 << '\n';
	static bool b3 = is_const_eval(); // true
	cout << "b3 = " << b3 << '\n';
	int x = is_const_eval() + is_const_eval(); // false
	cout << "x = " << x << '\n';
	const auto y = is_const_eval() + 10 + is_const_eval(); // true
	cout << "y = " << y << '\n';
}
