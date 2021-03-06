#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
    std::cout << "CivilEngineer Construcotor" << std::endl;
}
CivilEngineer::CivilEngineer(const CivilEngineer& source):Engineer(source) {
        std::cout << "Copy Constructor CivilEngineer" << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view fullname, int age,
std::string_view address, int contract_count, std::string_view speciality)
: Engineer(fullname, age, address, contract_count), m_speciality(speciality)
{
    std::cout << "CivilEngineer Custom Construcotor" << std::endl;

}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand){
    
    out << "CivilEngineer [Full name : " << operand.get_full_name() <<
                ",age : " << operand.get_age() << 
                //",address : " << operand.get_address() <<
                // ",contract_count : " << operand.contract_count <<
                ",speciality : " << operand.m_speciality << "]";
				
    return out;  
}

void CivilEngineer::printInfoMation() {
    std::cout << "fullname: " << get_full_name() << std::endl;
    std::cout << "age: " << get_age() << std::endl;
    std::cout << "address: " << get_address() << std::endl;
}

CivilEngineer::~CivilEngineer()
{
}
