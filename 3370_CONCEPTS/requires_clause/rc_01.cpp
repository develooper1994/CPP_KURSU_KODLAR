
template<typename C>
concept nec = requires {
    typename C::value_type;
};

struct A
{
    using value_type = int;
};

struct B{};

template <typename T>
requires nec<T>
class Myclass {

};

void func(nec auto);

int main()
{
    //Myclass<int> x; // Syntax Error

    Myclass<A> x; // ok
    func(A{}); //ok
    //func(B{}); // error
}
