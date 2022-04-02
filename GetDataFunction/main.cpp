// This brings in the iostrema library
#include <iostream>

void max_int(int a, int b, int* output) {
    if(a > b) {
        *output = a;
    } else {
        *output = b;
    }
}

void min_int(int a, int b, int& output) {
    if(a < b) {
        output = a;
    } else {
        output = b;
    }
}


int main() {
    int output;
    max_int(1,3, &output);
    // min_int(1,3, output);
    std::cout << "output: " << output << std::endl;
    return 0;
}


