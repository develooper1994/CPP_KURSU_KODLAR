#include <vector>


struct Point {
public:
    
    constexpr Point& operator+=(const Point& other) noexcept 
    {
        mx += other.mx;
        my += other.my;
        return *this;
    }
    double mx{}, my{};
};

constexpr bool test(int n) 
{
    std::vector<Point*> vec(n);

    for (auto& pt : vec) {
        pt = new Point{ 0., 1 };
    }

    Point sum{};

    for (auto& pt : vec)
        sum += *pt;

    for (auto& pt : vec)
        delete pt;

    return static_cast<int>(sum.my) == n;
}

int main() 
{
    static_assert(test(10));
}
