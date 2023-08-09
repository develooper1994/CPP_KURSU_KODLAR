constinit auto g = 56;

int get_count() 
{
	static constinit int count{};
	return ++count;
}

class Nec {
public:
	inline static constinit int sval = 1000;
};

