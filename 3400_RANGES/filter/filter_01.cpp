#include <vector>
#include <string>
#include <ranges>
#include <iostream>

int main()
{
	using namespace std;

	vector<string> svec{ "ali", "mert", "can", "zeynep", "melike", "aykut", "necati", "tamer", "emre", "ahmet"};
	
	for (const auto& s : views::filter(svec, [](const auto& s) { return s.length() % 2 == 0; }))
		cout << s << ' '; // Uzunluğu çift olanlar yazılacak

	cout << '\n';

	for (const auto& s : views::filter(svec, [](const auto& s) { return s[0] == 'a'; }))
		cout << s << ' '; // a ile başlayanlar yazılacak
}
