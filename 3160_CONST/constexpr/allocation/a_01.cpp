#include <numeric>

constexpr long long factorial(int n)
{
	return n < 2 ? 1 :n * factorial(n - 1);
}

constexpr double get_e(int n)
{
	double* p = new double[n];
	for (int i = 0; i < n; ++i) {
		p[i] = 1. / factorial(i);
	}

	auto sum = std::accumulate(p, p + n, 0.);

	delete[] p;

	return sum;
}


int main()
{
	constexpr auto val = get_e(15);
}
