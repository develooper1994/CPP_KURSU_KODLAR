//implicit declarations of special member functions

class Nec {
public:
	Nec(const Nec&);
};

class Nec_ {
public:
	~Nec() = default;
	Nec(const Nec&); //user declared
	Nec& operator=(const Nec&) = default; //!!

	//move members are not declared
};
