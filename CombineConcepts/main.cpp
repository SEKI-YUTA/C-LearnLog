// This brings in the iostrema library
#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t) {
    sizeof(T) <= 4;
    requires sizeof(T) <= 4;
};

template <typename T>
requires std::integral<T> || TinyType<T>
T add(T a, T b) {
    return a + b;
}

int 
main() {
    int x {10};
    int y {13};
    // std::string x {"10"};
    // std::string y {"13"};
    // double x {1.2};
    // double y {13.2};
    add(x,y);

    return 0;
}


