class A {
	friend void bar(A const&);
};

class B {
	friend void baz(B const&);
public:
	operator A() const;
};

int main() 
{
	B bx;
	baz(bx); //gecerli
	//bar(bx); //geçersiz
	bar(A(bx)); //geçerli
}
