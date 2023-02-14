

class Myclass {
public:
	//copy constructor defaulted by the compiler
	Myclass(const Myclass& other) :
		m_a(other.m_a), m_b(other.m_b), m_c(other.m_c) {}
private:
	A m_a;
	B m_b;
	C m_c;
};
