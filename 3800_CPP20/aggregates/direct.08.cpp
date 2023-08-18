struct Nec {
	int x, y, z;
};

int main()
{
	Nec nec1{.x = 4, .y = 7, .z = 8}; //legal
	Nec nec2(.x = 4, .y = 7, .z = 8); //illegal
}
