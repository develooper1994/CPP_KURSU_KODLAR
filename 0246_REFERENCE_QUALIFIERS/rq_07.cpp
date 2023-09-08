#include <vector>
#include <string>

class Person {
public:
	//...
	std::string get_name()const
	{
		return m_name; //causes copying at each call.
	}
private:
	std::string m_name;
	//...
};


int main()
{
	using namespace std;

	vector<Person> pvec(1000);

	for (const auto& per : pvec) {
		if (per.get_name().empty()) {
			//...
		}
	}
}
