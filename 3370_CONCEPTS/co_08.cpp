#include <type_traits>

template <typename T>
concept Pointer = std::is_pointer_v<T>;

template <typename T>
requires Pointer<T> void foo(T x);

template <typename T>
void bar(T x) requires Pointer<T>;

template <Pointer T>
void baz(T);

void func(Pointer auto x);

int main()
{
	int x{};

	foo(&x);
	bar(&x);
	baz(&x);
	func(&x);

	foo(x); //error
	bar(x);	//error
	baz(x);	//error
	func(x);//error

}
