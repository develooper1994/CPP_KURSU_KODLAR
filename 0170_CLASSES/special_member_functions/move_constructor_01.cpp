// A, B and C are types

class Myclass {
public:
	//move constructor defaulted by the compiler
	Myclass(Myclass&& other) :
		m_a(std::move(other.m_a)), 
		m_b(std::move(other.m_b)), 
		m_c(std::move(other.m_c)) {}
private:
	A m_a;
	B m_b;
	C m_c;
};
