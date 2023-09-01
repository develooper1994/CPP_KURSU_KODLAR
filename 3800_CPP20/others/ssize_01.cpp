#include <iostream>
#include <vector>

int main()
{
    std::vector ivec{ 2, 6, 8, 3, 5 };
    for (int i = 0; i < ssize(ivec); ++i) {
        std::cout << ivec[i] << ' ';
    }
}
