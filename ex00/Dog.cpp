#include "Dog.hpp"

Dog::Dog() : Animal() {
    type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other) {
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Dog::~Dog() {
}

void Dog::makeSound() const {
    std::cout << "Woof" << std::endl;
}

