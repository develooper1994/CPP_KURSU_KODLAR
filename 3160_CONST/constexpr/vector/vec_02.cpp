#include <vector>

constexpr int test(int n) 
{
    std::vector<int*> vec(n);

    for (auto& p : vec)
        p = new int{ n-- };

    int sum{};

    for (auto p : vec) {
        sum += *p;
    }

    for (auto p : vec)
        delete p;

    return sum;
}

int main() 
{
    constexpr auto val = test(10);
}
