#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
    type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other) {
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Cat::~Cat() {
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}