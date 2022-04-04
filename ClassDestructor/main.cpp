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
    std::cout << "the dog is died" << std::endl;
    delete p_age;
}

void some_func(Dog* mydog) {

}

int main() {
    Dog* mydog = new Dog("Fluffly", "Shepherd", 2);
    some_func(mydog);
    std::cout << "done" << std::endl;
    return 0;
}


