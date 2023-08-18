struct Nec {
	int x, y;
};

int main()
{
	Nec n1{2.3, 5.6}; //error - narrowing conversion
	Nec n2(2.3, 5.6); //error - narrowing conversion
}
