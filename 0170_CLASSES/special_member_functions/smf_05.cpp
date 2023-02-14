//implicit declarations of special member functions

class Nec {
public:
	Nec& operator=(const Nec&);
};

class Nec_ {
public:
	Nec_() = default;
	~Nec_() = default;
	
	Nec_(const Nec_&) = default; //!!
	Nec_& operator=(const Nec_&); //user declared

	//move members are not declared
};
