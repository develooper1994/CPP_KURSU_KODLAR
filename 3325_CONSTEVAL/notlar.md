* **consteval** olarak nitelenen fonksiyonlar geri dönüş değerlerini derleme zamanında üretmek zorunda.
* Programın çalışma zamanında değer üretmeleri / üretebilmeleri mümkün değil.
* Bu şekilde nitelenen fonksiyonlara _"immediate function"_ da deniyor.
* **consteval** fonksiyonlar _coroutine_ olarak kullanılamıyorlar.
* Gövdelerinde _throw statement_ olamıyor.
* Gövdelerinde _goto label_ ya da _case label_ olamıyor.
* **constexpr** fonksiyonlar için söz konusu olan kısıtlamalar **consteval** fonksiyonlar için de geçerli.
* Parametre değişkenleri ve içindeki yerel değişkenler _literal type_ olmak zorunda.
* Kısaca _constexpr_ fonksiyonlar için söz konusu olan kısıtlamalar _consteval_ fonksiyonlar için de geçerli.
