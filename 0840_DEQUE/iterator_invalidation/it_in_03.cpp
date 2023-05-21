#include <iostream>
#include <deque>

/*
	All iterators and references are invalidated unless the inserted member is at an end (front or back) 
	of the deque (in which case all iterators are invalidated, but references to elements are unaffected). 
*/

int main()
{
	std::deque d{ 10, 20, 30, 40, 50};

	int* p = &d[2];
	auto iter = d.begin() + 2;

	d.push_front(-1);
	d.push_back(-1);

	std::cout << *p << '\n'; //well-defined
	std::cout << *iter << '\n'; //ub
}
