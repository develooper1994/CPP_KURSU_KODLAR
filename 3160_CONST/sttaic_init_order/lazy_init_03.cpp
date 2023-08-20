// JOnathan Müller

template <typename Tag, typename T>
class lazy_init
{
public:
	constexpr lazy_init() = default;
	T& get()
	{
		static T global;
		return global;
	}
	T& operator*() { return get(); }
	T* operator->() { return &get(); }
};
