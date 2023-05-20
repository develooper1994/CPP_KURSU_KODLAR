struct Nec {
    Nec(int) {}
    friend void func(Nec) {};
};

int main()
{
    Nec x{5};
    func(x);    // gecerli (ADL)
    func(7);    // geçersiz: func ismi bulunamadi
    ::func(x);  // geçersiz 
}
