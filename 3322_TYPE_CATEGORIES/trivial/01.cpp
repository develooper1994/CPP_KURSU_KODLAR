#include <type_traits>
#include <string>

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

//trivial sınıfların non-static veri elemanları trivial türlerden olabilir.
static_assert(std::is_trivial_v<T5>); //Ok



struct T6 {
    T1 ar_t1[10];
    T2 ar_t2[20];
};

// trivial sınıfların non - static veri elemanları trivial türlerden diziler olabilir.
static_assert(std::is_trivial_v<T6>); //Ok



struct T7 {
    T6 mt;
    void foo(); 
};

// trivial sınıfların sanal olmayan (non-virtual) üye fonksiyonları olabilir:
static_assert(std::is_trivial_v<T7>); //Ok

struct T8 {
    T8() = default; //user declared but not user-provided
    T8(int x) : x(x) {};
    int x;
};

// trivial sınıfların özel üye fonksiyon olmayan ctor'ları olabilir.
// Ancak trivial olması için default ctor.'a sahip olması gerekir

static_assert(std::is_trivial_v<T8>); //Ok


struct T9 {
    static std::string ms;
};


// trivial sınıfların trivial olmayan sınıflar türünden static veri elemanları olabilir.
static_assert(std::is_trivial_v<T9>); //Ok
