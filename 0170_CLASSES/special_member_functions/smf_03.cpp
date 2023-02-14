//implicit declarations of special member functions

class Nec {
public:
	~Nec();
};

class Nec_ {
public:
	Nec() = default;
	~Nec(); //user declared

	Nec(const Nec&) = default;  //!!
	Nec& operator=(const Nec&) = default; //!!

	//move members are not declared
};
