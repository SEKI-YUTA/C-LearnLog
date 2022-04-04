// This brings in the iostrema library
#include <iostream>
#include <concepts>
// #include <type_traits>


// syntax1
/*
template <typename T>
requires std::integral<T>
T add(T a, T b) {
    return a + b;
}
*/


// syntax2
/*
template <std::integral T>
requires std::integral<T>
T add(T a, T b) {
    return a + b;
}
*/

// syntax3
/*
auto add(std::integral auto a,std::integral auto b) {
    return a + b;
}
*/

// syntax4
// template<typename T>
// T add(T a, T b) requires std::integral<T> {
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
requires Multipliable<T>
T add(T a, T b) {
    return a + b;
}

int 
main() {
    char a_0 {10};
    char a_1 {15};
    auto result_a = add(a_0, a_1);
    std::cout << "result_a " << static_cast<int>(result_a) << std::endl;

    int b_0 {11};
    int b_1 {18};
    auto result_b = add(b_0, b_1);
    std::cout << "result_b " << result_b << std::endl;

    // double c_0 {10.8};
    // double c_1 {15.8};
    // auto result_c = add(c_0, c_1);
    // std::cout << "result_c " << result_c << std::endl;

    // std::string x {"Hello"};
    // std::string y {"World"};
    // add(x,y);

    return 0;
}


