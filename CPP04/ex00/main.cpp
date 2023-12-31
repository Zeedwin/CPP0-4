#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* wrong = new WrongCat();
    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 
    std::cout << meta->getType() << " " << std::endl; 
    std::cout << wrong->getType() << " " << std::endl; 
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    wrong->makeSound();
    delete meta;
    delete j;
    delete i;
    delete wrong;
	return 0;
}