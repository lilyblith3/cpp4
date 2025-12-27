#include "Animal.hpp"
#include <iostream>

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

std::string Animal::getType() const {
    return type;
}