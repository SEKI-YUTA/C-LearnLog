// This brings in the iostrema library
#include <iostream>
#include <concepts>
// #include <type_traits>

template <typename T>
concept TinyType = requires(T t) {
    sizeof(T) <= 4; // simple requirement
    requires sizeof(T) <= 4; 
};

// TinyType auto add(TinyType auto a, TinyType auto b) {
//     return a + b;
// }

template <typename T>
concept Multipliable = requires(T a, T b) {
    a * b;
};

template <typename T>
concept Incrementable = requires(T a) {
    a+=1;
    a++;
    ++a;
};

template <typename T>
concept Addable = requires(T a, T b) {
    {a + b} -> std::convertible_to<int>;
};

Addable auto add(Addable auto a, Addable auto b) {
    return a + b;
}

// template <typename T>
// requires Multipliable<T>
// T add(T a, T b) {
//     return a + b;
// }

int 
main() {
    char x{67};
    char y{56};

    double a {10.5};

    add(x,y);
    return 0;
}


