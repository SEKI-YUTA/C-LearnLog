// This brings in the iostrema library
#include <iostream>
#include <string>
#include <iomanip>
#include <compare>



int addNumbers(int firstNum, int secondNum) {
    int sum {firstNum + secondNum};
    return sum;
}

int 
main() {
    // const int Pen{10};
    // const int Marker{20};
    // const int Eraser{30};

    // int tool {40};
    // switch (tool)
    // {
    // case Pen: {
    //     std::cout << "Let's write anythin" << std::endl;
    //     }
    //     break;
    // case Marker: {
    //     std::cout << "Let's mark anythin" << std::endl;
    //     }
    //     break;
    // case Eraser: {
    //     std::cout << "delete anythin" << std::endl;
    //     }
    //     break;
    
    // default:{
    //     std::cout << "unknown tool" << std::endl;
    // }
    //     break;
    // }

    // ---------

    // const char additional{"+"};
    // const char substract = "-";
    char a = 76;
    int val1 {};
    int val2 {};
    std::string op {};
    std::cin >> val1 >> op >> val2;

    switch (op[0])
    {
    case "+": {
        std::cout << (val1 + val2) << std::endl;
    }
        break;
    
    default:
        break;
    }


    return 0;
}
