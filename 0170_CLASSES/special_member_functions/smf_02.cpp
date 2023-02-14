//implicit declarations of special member functions

class Nec {
public:
	Nec() = default;   
};

class Nec_ {
public:

	Nec();  //user declared
	~Nec() = default;  

	Nec(const Nec&) = default;
	Nec& operator=(const Nec&) = default;

	Nec(Nec&&) = default;
	Nec& operator=(Nec&&) = default;
};
