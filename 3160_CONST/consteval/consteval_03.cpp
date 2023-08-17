//constexpr function may not call a consteval function

consteval int square(int x)
{
	return x * x;
}

constexpr int foo(int x)
{
	auto val = square(x); //invalid

	return val + 2;
}

