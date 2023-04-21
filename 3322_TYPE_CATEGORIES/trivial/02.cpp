#include <type_traits>



struct Nt1 {
	Nt1();
};

// default ctor. user provided Nt1 trivial değil
//static_assert(std::is_trivial_v<Nt1>);

struct Nt2 {
	Nt1 nt1;
};

// Non trivial elemanı var. trivial değil
//static_assert(std::is_trivial_v<Nt2>);

struct Nt3 : Nt1{
	
};

//static_assert(std::is_trivial_v<Nt3>);

struct Nt4 {
	Nt4();
};

Nt4::Nt4() = default;

//static_assert(std::is_trivial_v<Nt4>);

struct Nt4 {
	Nt4();
};

Nt4::Nt4() = default;
// default ctor daha sonra default edilirse trivial sınıf olmuyor
//static_assert(std::is_trivial_v<Nt4>);

struct Nt5 {
	virtual void foo();
};

// trivial sınıfların sanal üye fonksiyonları olamaz
//static_assert(std::is_trivial_v<Nt5>);

