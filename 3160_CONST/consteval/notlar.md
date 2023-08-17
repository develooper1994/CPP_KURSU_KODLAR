* **consteval** fonksiyonlar _C++20_ standardı ile dile eklendi. 
* **consteval** olarak nitelenen fonksiyonlar geri dönüş değerlerini derleme zamanında üretmek zorunda. Yani programın çalışma zamanında çağrılamıyorlar.
* Programın çalışma zamanında değer üretmeleri / üretebilmeleri mümkün değil.
* Bu şekilde nitelenen fonksiyonlara _"immediate function"_ da deniyor.
* **consteval** fonksiyonlar örtülü olarak _inline_ _(implicitly inline)_
* **consteval** fonksiyonlar _coroutine_ olarak kullanılamıyorlar.
* _destructor_, _memory allocation_ ve _memory deallocation_ fonksiyonları  **consteval** olamıyorlar.
* Gövdelerinde _throw statement_ olamıyor.
* Gövdelerinde _goto label_ ya da _case label_ olamıyor.
* **constexpr** fonksiyonlar için söz konusu olan kısıtlamalar **consteval** fonksiyonlar için de geçerli.
* Parametre değişkenleri ve içindeki yerel değişkenler _literal type_ olmak zorunda.
* Kısaca _constexpr_ fonksiyonlar için söz konusu olan kısıtlamalar _consteval_ fonksiyonlar için de geçerli.
* Bir fonksiyon bildiriminde  _consteval_, _constexpr_ ve _constinit_ belirteçlerinden _(specifiers)_ yalnızca biri kullanılabilir.
* _consteval_ bir fonksiyon _constexpr_ fonksiyona çağrı yapabilir. Ancak _constexpr_ bir fonksiyon _consteval_ bir fonksiyona çağrı yapamaz.
