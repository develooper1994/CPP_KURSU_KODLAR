((how std::declval is implemented;

#include <utility>

template <typename T>
std::add_rvalue_reference_t<T> Declval()noexcept;
