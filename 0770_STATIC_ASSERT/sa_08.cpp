#include <type_traits>

template <class T>
void fswap(T& a, T& b)
{
	static_assert(std::is_copy_constructible<T>::value, "Swap requires copying");
	static_assert(noexcept(std::is_nothrow_move_constructible<T>::value
		&& std::is_nothrow_move_assignable<T>::value),
		"Swap may throw");
	auto temp{ a };
	a = b;
	b = temp;
}

struct NoCopy
{
	NoCopy() = default;
	NoCopy(const NoCopy&) = delete;
};

int main()
{
	int x = 30, y = 55;

	fswap(x, y); //sorun yok

	NoCopy nc1, nc2;
	fswap(nc1, nc2); //gecersiz - static_assert
}
