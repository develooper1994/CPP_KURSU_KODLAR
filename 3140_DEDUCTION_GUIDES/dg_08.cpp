#include <type_traits>

template <typename T>
class Myclass {
public:
	Myclass(T x);
};

template <typename T>
Myclass(T)->Myclass<T&>;

int main()
{
	int x = 5;

	Myclass m(x);
	constexpr bool b = std::is_same_v<decltype(m), Myclass<int&>>; //true
}
