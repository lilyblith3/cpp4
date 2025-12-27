#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "=== Creating array of Animals ===" << std::endl;
    const int s = 10;
    Animal *animal[s];
    
    for (int i = 0; i < s; i++)
    {
        if (i < s / 2)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    
    std::cout << "\n=== Testing sounds ===" << std::endl;
    for (int i = 0; i < s; i++)
        animal[i]->makeSound();
    
    std::cout << "\n=== Deleting array ===" << std::endl;
    for (int i = 0; i < s; i++)
        delete animal[i];
    
    std::cout << "\n=== Deep copy test for Dog ===" << std::endl;
    Dog origDog;
    origDog.setBrainIdea(0, "I want a bone");
    origDog.setBrainIdea(1, "I love my owner");
    
    std::cout << "\nOriginal dog ideas:" << std::endl;
    std::cout << "Idea 0: " << origDog.getBrainIdea(0) << std::endl;
    std::cout << "Idea 1: " << origDog.getBrainIdea(1) << std::endl;
    
    std::cout << "\nCreating copy of dog..." << std::endl;
    Dog copyDog = origDog;
    
    std::cout << "\nCopy dog ideas (should be same):" << std::endl;
    std::cout << "Idea 0: " << copyDog.getBrainIdea(0) << std::endl;
    std::cout << "Idea 1: " << copyDog.getBrainIdea(1) << std::endl;
    
    std::cout << "\nModifying original dog's brain..." << std::endl;
    origDog.setBrainIdea(0, "I want food now!");
    
    std::cout << "\nOriginal dog idea 0: " << origDog.getBrainIdea(0) << std::endl;
    std::cout << "Copy dog idea 0: " << copyDog.getBrainIdea(0) << std::endl;
    std::cout << "(Should be different proving deep copy)" << std::endl;
    
    std::cout << "\n=== Deep copy test for Cat ===" << std::endl;
    Cat origCat;
    origCat.setBrainIdea(0, "I need a nap");
    
    Cat copyCat(origCat);
    origCat.setBrainIdea(0, "I'm hungry");
    
    std::cout << "Original cat: " << origCat.getBrainIdea(0) << std::endl;
    std::cout << "Copy cat: " << copyCat.getBrainIdea(0) << std::endl;
    std::cout << "(Should be different - proving deep copy)" << std::endl;
    
    std::cout << "\n=== Destructors ===" << std::endl;
    return 0;
}