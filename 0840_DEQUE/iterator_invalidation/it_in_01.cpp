#include <iostream>
#include <deque>

/*
	std::deque'te silme işlemleri iki uçtan yapıldığında 
	deque'te tutulan silinmeyen öğelere iterator'ler ve referanslar 
	geçersiz hale gelmez.
*/

int main()
{
	std::deque d{ 0, 1, 2, 3,  4, 5, 6, 7, 8, 9,};

	auto iter = d.begin() + 5;
	int* p = &d[5];
	int& r  = d[5];

	for (int i = 0; i < 4; ++i) {
		std::cout << *iter << *p << r << '\n';
		d.pop_front();
		d.pop_back();
	}
}
