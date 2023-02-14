//implicit declarations of special member functions

class Nec {
public:
	Nec(Nec&&);
};

class Nec_ {
public:
	~Nec_() = default;
	Nec_(const Nec_&) = delete; 
	Nec_& operator=(const Nec_&) = delete; 
	Nec_(Nec_&&); //user declared

	//move assignment is not declared
};
