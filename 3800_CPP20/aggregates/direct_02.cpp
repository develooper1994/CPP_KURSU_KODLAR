#include <iostream>
#include <memory>

struct Point {
	int x, y, z;
};

template <typename T, typename ...Args>
std::unique_ptr<T> MakeUnique(Args && ...args)
{
	return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

int main()
{
	using namespace std;

	auto up1 = make_unique<Point>(3, 5, 6); //illegal in C++17 legal in C++20
	auto up2 = MakeUnique<Point>(3, 5, 6); //illegal in C++17 legal in C++20
}
