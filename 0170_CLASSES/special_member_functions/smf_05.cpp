//implicit declarations of special member functions

class Nec {
public:
	Nec& operator=(const Nec&);
};

class Nec_ {
public:
	Nec() = default;
	~Nec() = default;
	Nec(const Nec&) = default; //!!
	Nec& operator=(const Nec&); //user declared

	//move members are not declared
};
