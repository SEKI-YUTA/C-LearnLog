#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
    public : Person(const std::string& names_person, int age_person);

    void print_info() const {
        std::cout << "name: " << full_name << " age: " << age << std::endl;
    }

    private :
    std::string full_name;
    int age;

    public :
    static int person_count;
};

#endif 