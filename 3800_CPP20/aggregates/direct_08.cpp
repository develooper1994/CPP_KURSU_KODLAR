#include <iostream>

struct Nec {
	int x, y, z;
};

struct Erg {
	int i;
	Nec nec;
};

int main()
{
	Erg e1{1, {4, 5, 6}};
	Erg e2{ 1, (4, 5, 6)};

	std::cout << e1.nec.x << e1.nec.y << e1.nec.z << '\n';
	std::cout << e2.nec.x << e2.nec.y << e2.nec.z << '\n';
}
