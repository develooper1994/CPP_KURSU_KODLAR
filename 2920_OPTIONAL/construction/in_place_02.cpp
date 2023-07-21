#include <iostream>
#include <optional>

class Myclass {
public:
	Myclass()
	{
		std::cout << "default ctor\n";
	}

	~Myclass()
	{
		std::cout << "destructor\n";
	}

};


int main()
{
	using namespace std;

	optional<Myclass> x;
	optional<Myclass> y{ in_place };
}
