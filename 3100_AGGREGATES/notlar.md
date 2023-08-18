* _aggregate_ sınıflar kullanıcılara tüm elemanlarına (özel bir) ilk değer verme sentaksı ile erişme olanağı sağlar.
* aggregate'ların tüm _non static_ veri elemanları _public_ olmak zorunda. 
* C++17 standardı _aggregate_'ların kalıtım yoluyla elde edilmesi olanağını verdi.
  * _aggregate_'ların taban sınıflarının _aggregate_ olması gerekmiyor.
  * aggregate'ların taban sınıflarının virtual olmaması gerekiyor. _(no virtual base class)_
* aggreagate'ların tüm _non static_ veri elemanlarının _public_ olması gerekiyor. 
* _aggregate_'ların elemanlarının _aggregate_ olması gerekmiyor.
* _aggregate_'ların elemanları referans olabilir.
* bir _aggregate type_ aynı zamanda _trivial_ ve _standard-layout type_ olabilir. Ama olmak zorunda değil. 
