#include "Animal.hpp"

Animal::Animal() : type("Animal") {
}

Animal::Animal(const Animal& other) : type(other.type) {
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

Animal::~Animal() {
}

void Animal::makeSound() const {
    std::cout << "animal sound" << std::endl;
}