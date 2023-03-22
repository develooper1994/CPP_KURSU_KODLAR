#include <string>
#include <iostream>


int main()
{
	using namespace std;

	string str{ "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" };
	char c;

	cout << "enter the character to search: ";
	cin >> c;

	if (auto idx = str.find(c); idx != string::npos) {
		cout << "found at the index of : " << idx << "\n";
		str[idx] = '*';
		cout << str << '\n';
	}
	else {
		cout << "not found!\n";
	}

}
