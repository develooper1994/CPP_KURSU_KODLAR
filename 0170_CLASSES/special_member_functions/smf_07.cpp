//implicit declarations of special member functions

class Nec {
public:
	Nec& operator=(Nec&&);
};

class Nec_ {
public:
	Nec_() = default
	~Nec_() = default;

	//copy members are implicitly deleted
	Nec_(const Nec_&) = delete; 
	Nec_& operator=(const Nec_&) = delete; 
	
 //move ctor is not declared
	Nec_& operator=(Nec_&&); //user declared
	
};
