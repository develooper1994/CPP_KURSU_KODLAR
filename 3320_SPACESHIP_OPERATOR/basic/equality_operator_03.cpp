// == operatör fonksiyonunun olması durumunda derleyici != ifadesi için
// a != b yerine
// !(a == b) mümkün değil ise
// !(b == a) 

#include <iostream>

struct Nec {
public:
	Nec(int val) : mx(val) {}
	[[nodiscard]] friend bool operator==(const Nec&left, const Nec& right)
	{
		return left.mx == right.mx;
	}
private:
	int mx;
};


int main()
{
	std::cout << std::boolalpha;
	Nec n1{ 43 }, n2{ 76 };

	std::cout << (n1 == n2) << '\n';
	std::cout << (n1 != n2) << '\n';
	std::cout << (10 != n1) << '\n';
	std::cout << (n2 != 76) << '\n';
}
