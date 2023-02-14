//implicit declarations of special member functions

class Nec {
public:
	~Nec();
};

class Nec_ {
public:
	Nec_() = default;
	~Nec_(); //user declared

	Nec_(const Nec_&) = default;  //!!
	Nec_& operator=(const Nec_&) = default; //!!

	//move members are not declared
};
