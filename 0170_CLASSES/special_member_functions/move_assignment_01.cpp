class Myclass {
public:
	//move assignment function defaulted by the compiler
	Myclass& operator=(Myclass&& other)
	{
		m_a = std::move(other.m_a);
		m_b = std::move(other.m_b);
		m_c = std::move(other.m_c);

		return *this
	}
		
private:
	A m_a;
	B m_b;
	C m_c;
};
