//implicit declarations of special member functions

class Nec {
public:
	Nec(Nec&&);
};

class Nec_ {
public:
	//default ctor. is not declared
	~Nec_() = default;

	//copy members are implicitly deleted
	Nec_(const Nec_&) = delete; 
	Nec_& operator=(const Nec_&) = delete; 
	
	Nec_(Nec_&&); //user declared
	//move assignment is not declared
};
