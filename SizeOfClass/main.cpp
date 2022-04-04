// This brings in the iostrema library
#include <iostream>

class Dog {
    public:
        Dog() = default;
        Dog(std::string_view name, int age) {
            this->name = name;
            *(this->age) = age;
            // this->age = &age // not work
        }
        ~Dog() {
            std::cout << "Dog destructor" << std::endl;
        }
        void dogInfo() {
            std::cout << "name: " << name << std::endl;
            std::cout << "age: " << *age << std::endl;
        }

    private:
        size_t leg_count;
        int* age;
        std::string name;
};

int main() {
    Dog dog1("pumma", 1);
    std::cout << "Dog size" << sizeof(Dog) << std::endl;
    std::cout << "dog1 size: " << sizeof(dog1) << std::endl;
    std::cout << "size_t size: " << sizeof(size_t) << std::endl;
    std::cout << "int* size: " << sizeof(int*) << std::endl;
    std::cout << "std::string size: " << sizeof(std::string) << std::endl;
    dog1.dogInfo();
    return 0;
}


