#include <stdexcept>

constexpr int foo(int x)
{
    if (x < 0)
    {
        throw std::runtime_error{ "argument must be positive" };
    }

    return x;
}


int main()
{
    constexpr auto x1 = foo(12);
    constexpr auto x2 = foo(-5); //error
}
