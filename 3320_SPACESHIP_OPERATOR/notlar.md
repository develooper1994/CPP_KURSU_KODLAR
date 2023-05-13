Eğer derleyici 
```
a != b
```
 
ifadesi karşılığı çağrılacak bir fonksiyon bulamaz ise

```
!(a == b)
```

biçiminde bir ifadenin geçerliliğini araştırıyor. Bu da geçerli değil ise bu kez

```
!(b == a) 
```

ifadesinin geçerliliğini sınıyor.

hem operator== hem de operator != default edilebiliyor.

Fonksiyonların default edilmesi durumunda;

* sınıfın elemanlarının karşılaştırılması _exception throw_ etmiyorsa oluşturulan fonksiyon _noexcept_ belirleyicisine sahip.
* Karşılaştırma işlemleri derleme zamanında yapılabiliyor ise fonksiyonlar _constexpr_
* _rewriting_ söz konusu olduğundan birinci operand _(sol operand)_ için de örtülü dönüşüm yapılabiliyor.
* Fonksiyonun geri dönüş değerinin kullanılmaması durumunda derleyici uyarı mesajı verecek.
* Yani fonksiyon _[[nodiscard]] attribute_ ile bildirilmiş kabul ediliyor.

* <=> C++20 standartları ile dile eklenen yeni bir _binary_ operatör.
* <=> operatörünün önceliği diğer karşılaştırma operatörlerinden daha yüksek.
* <=> operatörünün ürettiği değer bir tam sayı türünden değil. Karşılaştırma kategorisine ilişkin olan operatörün ürettiği değer aşağıdaki türlerden birinden olmak zorunda:
+ strong ordering
+ weak ordering
+ partial ordering

Bu türler _0_ sabiti ile ile karşılaştırılabiliyorlar.

default edilen <=> operatörü
+ Derleyici fonksiyonun geri dönüş değerinin türünü çıkarım yoluyla belirliyor. _(strong ordering, weak ordering, partial ordering)_
+ Geri dönüş değeri türü auto yapılıyor.
+ sadece bu operator default edilirse derleyici == operatörünü de default ediyor

Örneğin Nec isimli sınıfın aşağıdaki gibi tanımlandığını düşünelim:

``` 
#include <compare>

class Nec {
public:
	constexpr Nec(int x) noexcept : mx{ x } {}
	auto operator<=> (const Nec& rhs) const = default;
private:
	int mx;
};
```

Derleyici bu tanımı şöyle ele alacak:
```
#include <compare>

class Nec {
public:
	constexpr Nec(int x) noexcept : mx{ x } {}
	auto operator<=> (const Nec& rhs) const = default;
	bool operator== (const Nec& rhs) const = default; // örtülü olarak bildiriliyor
private:
	int mx;
};
```

