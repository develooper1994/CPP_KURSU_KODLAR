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


struct T4 {
public:
    int a;
protected: 
    int b;
private:
    int c;
};

//trivial sınıfların non-static veri elemanları private ya da protected olabilir.
static_assert(std::is_trivial_v<T4>); //Ok


struct T5 {
    T1 t1;
    T2 t2;
    T3 t3;
    T4 t4;
};

//trivial sınıfların non-static veri elemanları trivial türlerden olabilir
static_assert(std::is_trivial_v<T5>); //Ok
