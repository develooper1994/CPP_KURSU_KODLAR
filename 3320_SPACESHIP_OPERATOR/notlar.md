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

* sınıfın elemanlarının karşılaştırıması exception throw etmiyorsa oluşturulan fonksiyon _noexcept_ belirleyicisine sahip.
* Karşılaştırma işlemleri derleme zamanında yapılabiliyor ise fonksiyonlar _constexpr_
* rewriting söz konusu olduğundan birinci operand_ (sol operand)_ için de örtülü dönüşüm yapılabiliyor.
* Fonksiyonun geri dönüş değerinin kullanılmaması durumunda derleyici uyarı mesajı evrecek.
* Yani fonksiyon [[nodiscard]] attribute ile bildirilmiş kabul ediliyor.

* <=> C++20 standartları ile dile eklenen yeni bir _binary_ operatör.
* <=> operatörünün önceliği diğer karşılaştırma operatörlerinden daha yüksek.
* <=> operatörünün ürettiği değer bir tam sayı türünden değil. Karşılaştırma kategorisine ilişkin olan operatörün ürettiği değer aşağıdaki türlerden birinden olmak zorunda:
+ strong ordering
+ weak ordering
+ partial ordering

Bu türler _0_ sabiti ile ile karşılaştırılabiliyorlar.
