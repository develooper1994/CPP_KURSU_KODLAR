* _aggregate_ sınıflar kullanıcılara tüm elemanlarına (özel bir) ilk değer verme sentaksı ile erişme olanağı sağlar.
* _aggregate_'ların tüm _non static_ veri elemanları _public_ olmak zorunda.
* _aggregate_'ların _private_ ya da _protected_ üye fonksiyonları olabilir.
* _aggregate_'lar _static_ veri elemanlarına sahip olabilir.
* _aggregate_'lar sanal fonksiyonlara sahip olamaz.
* C++17 standardı _aggregate_'ların kalıtım yoluyla elde edilmesi olanağını verdi.
  * _aggregate_'ların taban sınıflarının _aggregate_ olması gerekmiyor.
  * aggregate'ların taban sınıflarının virtual olmaması gerekiyor. _(no virtual base class)_
* _aggregate_'ların elemanlarının _aggregate_ olması gerekmiyor.
* _aggregate_'ların elemanları referans olabilir.
* bir _aggregate type_ aynı zamanda _trivial_ ve _standard-layout type_ olabilir. Ama olmak zorunda değil.
* _aggregate_ türlerden nesneler için her zaman _structured binding_ sentaksı kullanılabilir.
* _lambda_ ifadelerinden elde edilen _closure type_'lar
