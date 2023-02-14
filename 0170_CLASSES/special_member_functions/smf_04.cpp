//implicit declarations of special member functions

class Nec {
public:
	Nec(const Nec&);
};

class Nec_ {
public:
	//default constructor is not declared
	~Nec_() = default;
	Nec_(const Nec_&); //user declared
	Nec_& operator=(const Nec_&) = default; //!!

	//move members are not declared
};
