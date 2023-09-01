#include <bit>

void func()
{
	if constexpr (std::endian::native == std::endian::little) {
		//if the system is little endian
	}
	else if (std::endian::native == std::endian::big) {
		//if the system is big endian
	}
	else {
		// if the system is mixed
	}
}
