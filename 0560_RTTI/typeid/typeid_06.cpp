#include <typeinfo>
#include <iostream>

int main()
{
	//type_info sınıfının varsayılan kurucu islevi yok
	//std::type_info x; //gecersiz 

	//type_info sınıfının kopyalayan kurucuy işlevi delete edilmiş.
	//auto x = typeid(20); //gecersiz
	//std::type_info& tr = typeid(int); //gecersiz, const & olmalı
	const std::type_info& tr1 = typeid(int); //gecerli
	auto& tr2 = typeid(int); //gecerli
}
