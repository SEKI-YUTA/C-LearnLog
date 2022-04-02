#include "person.h"

int Person::person_count = 8;

Person::Person(const std::string& names_person, int age_person)
    : full_name{names_person}, age{age_person}{
        ++person_count;
    }