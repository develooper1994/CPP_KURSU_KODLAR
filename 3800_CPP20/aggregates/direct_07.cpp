struct Nec {
	int x;
	int &&r;
};

int main()
{
	Nec n1{10, 20};
	Nec n2(10, 20); //dangling reference
}
