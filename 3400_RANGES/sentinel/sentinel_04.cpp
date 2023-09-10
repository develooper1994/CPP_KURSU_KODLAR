

#include <string>
#include <algorithm>

struct UnreachableSentinel_t {
	constexpr bool operator==(const auto& val) const
	{
		return false;
	}
};

constexpr UnreachableSentinel_t UnReachableSentinel_t;


/*
	find algoritması içinde
	while (*beg != UnReachableSentinel)  //always true olacak
*/

std::string read_from_file(const char* pfile_name);

int main()
{
	const auto str = read_from_file("bigfile.txt");
	auto iter = std::ranges::find(str.begin(), UnReachableSentinel, '\n');
}
