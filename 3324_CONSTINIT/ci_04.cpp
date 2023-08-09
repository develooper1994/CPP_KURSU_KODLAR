int foo(int x)
{
	//...
	return x * 10;
}

constexpr int bar(int x)
{
	//...
	return x * 10;
}

consteval int baz(int x)
{
	//...
	return x * 10;
}

int ival{ 4 };

//constinit auto g1 = foo(10); //error - initializer is not a constant
constinit auto g2 = bar(10); //valid
//constinit auto g3 = bar(ival); //error - initializer is not a constant
constinit auto g4 = baz(10); //valid
constinit auto g5 = bar(g4); //error


