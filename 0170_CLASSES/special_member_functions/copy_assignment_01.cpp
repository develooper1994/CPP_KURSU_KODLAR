// A, B and C are types

class Myclass {
public:
	//copy assignment function defaulted by the compiler
	Myclass& operator=(const Myclass& other)
	{
		m_a = other.m_a;
		m_b = other.m_b;
		m_c = other.m_c;

		return *this
	}
		
private:
	A m_a;
	B m_b;
	C m_c;
};
