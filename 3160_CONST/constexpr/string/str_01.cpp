#include <vector>
#include <string>
#include <algorithm>

constexpr std::vector<std::string> split(std::string_view strv, std::string_view delims = " ") {
    std::vector<std::string> output;
    size_t first = 0;

    while (first < strv.size()) {
        const auto second = strv.find_first_of(delims, first);

        if (first != second)
            output.emplace_back(strv.substr(first, second - first));

        if (second == std::string_view::npos)
            break;

        first = second + 1;
    }

    return output;
}

constexpr size_t numWords(std::string_view str) 
{
    std::vector<std::string> vec;

    const auto words = split(str);

    return words.size();
}

int main() 
{
    static_assert(numWords("hello world abc xyz") == 4);
}
