#include <iostream>
#include <type_traits>

constexpr std::size_t str_length(const char* p)
{
    if (std::is_constant_evaluated()) {
        std::size_t len{};
        
        while (*p++)
            ++len;
        
        return len;
    }
    else {
        return std::strlen(p);        
    }
}

int main()
{
    constexpr auto len = str_length("necati");
}
