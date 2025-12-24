#include "Animal.hpp"

int main()
{
          const Animal* a = new Animal();
          const Animal* j = new Dog();
          const Animal* i = new Cat();
          
          std::cout << j->getType() << " " << std::endl;
          std::cout << i->getType() << " " << std::endl;
          i->makeSound(); 
          j->makeSound();
          a->makeSound();
          
          delete a;
          delete j;
          delete i;
          
          return 0;
}