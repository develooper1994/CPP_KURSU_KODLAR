**constinit** anahtar sözcüğü dile _C++20_ standardı ile eklendi.
* Bu anahtar sözcük statik ömürlü bir değişkenin derleme zamanında değerini almasını sağlıyor.
Şöyle ifade edilebilir: <br>
consinit = constexpr - const<br>
* _constinit_ değişkenler _const_ değil. _constinit_ yerine _compiletimeinit_ sözcüğü seçilseydi daha iyi olabilirdi. _(Jossutis)_
* Yalnızca _static storage duration_ ve _thread local storage duration_ kategorisinde olan değişkenler _constinit_ anahtar sözcüğü ile bildirilebilir.
* Global değişkenler ve static yerel değişkenlerin yerleri program çalışmaya başladığında (henüz main çağrılmadan) elde ediliyor ve program sonlanı-ncaya kadar bu yer korunuyor.
* _thread_local_ değişkenler _thread storage duration_ kategorisindeler. _Thread-local_ veriler her thread için ayrıca oluşturuluyor ve _thread_'in çalışmasın ın sonuna kadar yerleri korunuyor.
_thread_local_ veriler sadece ona sahip olan _thread_'e ilişkin. İlk kez kullanıldıkları yerde hayata başlatılıyorlar ve hayatları _(lifespan)_ _thread_'in sonuna kadar devam ediyor. 

