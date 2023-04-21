#include <type_traits>

struct T1 {};
static_assert(std::is_trivial_v<T1>); //Ok
// boş sınıflar (empty classes) trivial 


struct T2 {
    int x;
};

//trivial sınıfların elemanları olabilir
static_assert(std::is_trivial_v<T2>); //Ok


struct T3 : T2 { 
    T3() = default; 
    int y;
};
//trivial sınıfların taban sınıfları olabilir özel üye fonksiyonları default edilebilir.
static_assert(std::is_trivial_v<T3>); //Ok
