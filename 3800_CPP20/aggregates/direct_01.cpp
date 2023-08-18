struct Nec {
	int x, y, z;
};

int main()
{
	int a1[]{ 1,2,3 }; // legal
	int a2[](1, 2, 3); // illegal in C++17 legal in C++20
	Nec mynec(1, 2, 3); //valid since C++20
}
