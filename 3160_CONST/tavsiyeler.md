1. Eğer bir ifadenin değerinin derleme zamanında hesaplnamasını istiyorsanız bu ifade ile constexpr bir değişkeni _initialize edin_. 
Yani derleyicinin optimizasyonuna bırakmayın.

2. _const_ belirleyicisini sadece değeri değişmeyecek ve derleme zamanında hesaplanamayan değişkenler için kullanın.

3. _static_ ya da _thread_local_ değişkenlerin derleme zamanında _initialize_ edilmesi için (derleyiciniz izin veriyor ise)
_constinit_ kullanın. Böyle değişkenlerin derleme zamanında _initialize_ edilmesini derleyiciye bırakmayın..

