#include <ranges>
#include <vector>

using type = std::vector<int>;

int main()
{
	namespace rng = std::ranges;

	static_assert(rng::range<type>); //holds
	static_assert(rng::input_range<type>); //holds
	static_assert(rng::forward_range<type>); //holds
	static_assert(rng::bidirectional_range<type>); //holds
	static_assert(rng::random_access_range<type>); //holds
	static_assert(rng::contiguous_range<type>); //holds
	static_assert(rng::sized_range<type>); //holds
}
