#include <type_traits>
#include <iostream>

constexpr bool is_const_eval() 
{
	return std::is_constant_evaluated();
}

bool g1		= is_const_eval(); // true
const bool g2	= is_const_eval(); // true
static bool g3	= is_const_eval(); // true
static int g4	= g1 + is_const_eval(); // false

int main()
{
	using namespace std;

	boolalpha(cout);

	cout << "g1 = " << g1 << '\n';
	cout << "g2 = " << g2 << '\n';
	cout << "g3 = " << g3 << '\n';
	cout << "g4 = " << g4 << '\n';
}
