#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

//Engineer is doing private inheritance

class Engineer : private Person
{
friend std::ostream& operator<<(std::ostream& out , const Engineer& operand);
public:
    Engineer();
    Engineer(std::string_view fullname, int age,
    std::string_view address, int contract_count);
    Engineer(const Engineer& source);

    ~Engineer();
    
    void build_something(){
        m_full_name = "John Snow"; // OK
        m_age = 23; // OK
        //m_address = "897-78-723"; Compiler error
    }
    void detail();
    protected:
        using Person::get_address;
        using Person::get_age;
        using Person::get_full_name;
    
private : 
    int contract_count{0};
};

#endif