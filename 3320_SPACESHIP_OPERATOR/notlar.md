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

* sınıfın elemanlarının karşılaştırıması exception throw etmiyorsa oluşturulan fonksiyon noexcept belirleyicisine sahip.
* Karşılaştırma işlemleri derleme zamanında yapılabiliyor ise fonksiyonlar constexpr
* rewriting söz konusu olduğundan birinci operand (sol operand) için de örtülü dönüşüm yapılabiliyor.
* Fonksiyonun geri dönüş değerinin kullanılmaması durumunda derleyici uyarı mesajı evrecek.
* Yani fonksiyon [[nodiscard]] attribute ile bildirilmiş kabul ediliyor
