#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal("Animal");
    const Animal *j = new Dog("Dog");
    const Animal *i = new Cat("Cat");
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl << "Wrong Animal started" << std::endl << std::endl;
    delete meta;
    delete j;
    delete i;
    return 0;
}