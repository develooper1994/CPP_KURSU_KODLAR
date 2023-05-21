#include <iostream>
#include <deque>

/*
	std::deque'te silme işlemleri uçlardan yapılmadığında
	silinmeyen öğelere iterator'ler ve referanslar geçersiz hale gelir.
*/

int main()
{
	std::deque d{ 0, 1, 2, 3,  4, 5, 6, 7, 8, 9,};

	auto iter = d.begin() + 5;
	int* p = &d[5];
	int& r  = d[5];

	d.erase(d.begin() + 3);
	d.erase(d.begin() + 7);

	std::cout << *iter << *p << r;  //ub (iterator invalidation)
}
