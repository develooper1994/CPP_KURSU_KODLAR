//consteval function may call a constexpr function

constexpr int square(int x)
{
	return x * x;
}

consteval int foo(int x)
{
	auto val = square(x); //valid
	return x * x + 5;
}
