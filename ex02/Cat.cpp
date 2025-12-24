#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow" << std::endl;
}

void Cat::setBrainIdea(int index, const std::string& idea) {
    brain->setIdea(index, idea);
}

std::string Cat::getBrainIdea(int index) const {
    return brain->getIdea(index);
}