#include <vector>
#include <algorithm>
#include <numeric>

constexpr bool nectest(int n) 
{
    std::vector<int> vec(n);

    iota(vec.begin(), vec.end(), 1);
    auto sum = accumulate(vec.begin(), vec.end(), 0);
    return sum == n * (n + 1) / 2;
}

int main() 
{
    constexpr auto b = nectest(12);
}
