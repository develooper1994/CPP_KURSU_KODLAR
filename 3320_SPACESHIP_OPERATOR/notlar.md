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
