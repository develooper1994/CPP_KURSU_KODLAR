#include <string>
#include <optional>
#include <iostream>

std::optional<std::string> get_middle_name(const std::string& rname);

int main()
{
	std::string name;
	//...

	if (auto op = get_middle_name(name); op.has_value()) {
		std::cout << "ikinci isim: " << *op << '\n';
		//
	}
	else {
		std::cout << "ikinci isim yok..." << '\n';
	}
}
