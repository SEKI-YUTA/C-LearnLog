// This brings in the iostrema library
#include <iostream>
#include <string_view>
#include <string>
#include <iomanip>

class Dog {
    public :
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int page_param);
        ~Dog();
        void dogInfo() {
            std::cout << std::setw(10) << "name: " << std::setw(10) << name << std::endl;
            std::cout << std::setw(10) << "breed: " << std::setw(10) << breed << std::endl;
            std::cout << std::setw(10) << "age: " << std::setw(10) << *p_age << std::endl;
        }
    private :
        std::string name;
        std::string breed;
        int * p_age {nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param) {
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "the dog was born" << std::endl;
}
Dog::~Dog() {
    std::cout << "the dog is died at age " << *p_age << std::endl;
    delete p_age;
}

void some_func(Dog* mydog) {

}

int main() {
    // Dog* mydog = new Dog("Fluffly", "Shepherd", 2);
    // some_func(mydog);
    Dog dog1("Fluffly1", "Shepherd", 2);
    Dog dog2("Fluffly2", "Shepherd", 4);
    Dog dog3("Fluffly2", "Shepherd", 3);
    Dog dog4("Fluffly4", "Shepherd", 6);
    std::cout << "done" << std::endl;
    return 0;
}


