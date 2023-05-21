namespace nec {
	class C {

	};

	void foo(C);
}

void bar()
{
	using nec::foo;
	nec::C x;

	foo(x);  //NO ADL
}

int main()
{
	nec::C x;

	foo(x);		//ADL
	nec::foo(x);	//no ADL
	//(foo)(x);     //invalid No ADL
}
