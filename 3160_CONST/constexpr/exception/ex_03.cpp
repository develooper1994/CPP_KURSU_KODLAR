#include <stdexcept>

constexpr int factorial(int n)
{
    if (n < 0) {
        throw std::runtime_error{"negative factorial argument!" };
    }

    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

