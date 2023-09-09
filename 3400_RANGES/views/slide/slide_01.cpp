#include <ranges>
#include <vector>
#include <string>
#include <iostream>

int main(void)
{
	using namespace std;

	vector<string> svec{ "murat", "mert", "gul",
		"nihat", "cevahir", "jale", "seyhan" };

	for (auto rn : std::views::slide(svec, 2)) { 
		for (const auto& s : rn) {
			cout << s << " ";
		}
		cout << '\n';		
	}
}

