#include <format>
#include <iostream>

int main()
{
	using namespace std;

	try {
		cout << format("{:.}", "ali");
	}
	catch (const format_error& ex) {
		cout << ex.what(); // "missing precision specifier"
	}
}


