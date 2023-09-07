terimler

+ range
+ view (light-weight ranges)
+ range adaptor
+ subrange
Pipelines: _range_'lerin ya da _view_'ların birleşt işlenme süreçlerini birleştirebilmek içim kullanılan yöntem.

Bir _range_'i bir algoritmaya tek bir nesne olarak geçebiliyoruz.<br>
paralel algoritmalar için henüz bir destek yok. (bunlar rangified değil) <br>
_numerics_ başlık dosyasında tanımlanan algoritmalar için henüz bir destek yok. Bunlar _"rangified"_ değil<br> 

* _C++20_ ile gelen yeni algoritmalar range'leri ve iteratörleri _concept_'ler ile kısıtlıyor (constrains).
* Bazı algoritmaların geri dönüş türleri farklı.
* Bazı algoritmaların geri dönüş türleri "borrowed iterators" olabilir. Bu durum fonksiyonu çağıran koda, algoritmaya geçici _(temporary)_ bir _range_'in geçildiği ve döndürülen geçerli bir iteratör olmadığını bildiriyor.
* yeni algortimalar std isim alanının içsel _(nested)_ isim alanı olan _ranges_ içinde. _(std::ranges)_
* Bazı öğeler _ranges_ isim alanı içindeki _views_ isim alanı içinde. Bildirilen _namespace alias_ ile <br>
```std::ranges::views ```
demek ile <br>
```std::views```  
demek aynı anlamda.
