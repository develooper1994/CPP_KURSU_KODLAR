#include <iostream>

struct Nec {

	Nec() = default;
	Nec(const Nec& other) : mx{other.mx}, my{other.my}, mz{other.mz}
	{
		std::cout << "copy ctor\n";
	}

	Nec(Nec&& other) : mx{ other.mx }, my{ other.my }, mz{ other.mz }
	{
		std::cout << "move ctor\n";
	}
	int mx{}, my{}, mz{};
};

int main()
{
	Nec mynec;

	auto [x1, y1, z1] = mynec; 
	auto [x2, y2, z2] = std::move(mynec); 
}
