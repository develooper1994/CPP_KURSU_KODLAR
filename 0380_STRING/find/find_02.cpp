#include <string>
#include <iostream>

int main()
{
	using namespace std;

	string str{ "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" };

	cout << "enter the string to search: ";
	string searched;
	cin >> searched;

	if (auto idx = str.find(searched); idx != string::npos) {
		cout << "found at the index of : " << idx << "\n";
		auto slen = searched.length();
		str.replace(idx, slen, slen, '*');
		cout << str << '\n';
	}
	else {
		cout << "not found!\n";
	}

}
