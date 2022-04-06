#include "person.h"
#include "engineer.h"
#include <iostream>

// Engineer::Engineer() {
//     std::cout << "Engineer Constructor" << std::endl;
// }
Engineer::Engineer(std::string_view fullname, int age,
std::string_view address, int contract_count_param) : Person(fullname, age,address), contract_count(contract_count_param)
{
    std::cout << "Engineer Custom Constructor" << std::endl;
    
}
Engineer::Engineer(const Engineer& source):
Person(source), contract_count(source.contract_count)
{
    std::cout << "Copy Constructor Engineer" << std::endl;;
}

std::ostream& operator << (std::ostream& out, const Engineer& operand) {
    out << "Engineer [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() << 
                    ",address : " << operand.get_address() <<
                    ",contract_count : " << operand.contract_count << "]";
    return out;   
}

void Engineer::detail() {
    std::cout << get_full_name() << std::endl;
    std::cout << get_age() << std::endl;
    std::cout << get_address() << std::endl;
}

Engineer::~Engineer() {
    std::cout << "Destrucotor Engineer" << std::endl;
}