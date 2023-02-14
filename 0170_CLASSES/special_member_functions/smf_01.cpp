//implicit declarations of special member functions

class Nec {
public:
};

class Nec_ {
public:
	Nec() = default;   

	~Nec() = default; 

	Nec(const Nec&) = default;
	Nec& operator=(const Nec&) = default;

	Nec(Nec&&) = default;
	Nec& operator=(Nec&&) = default;
};
