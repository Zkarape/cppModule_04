#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void func() {
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl << "Wrong Animal started" << std::endl << std::endl;
    delete meta;
    delete j;
    delete i;
    // return 0;

    // Cat c;
    // Animal a;
    // std::cout << a.getType() << std::endl;
    // std::cout << c.getType() << std::endl;

    WrongAnimal *wa = new WrongCat();
    wa->makeSound();
    WrongCat wc;
    wc.makeSound();

    delete wa;
}

int main()
{
    func();
    system("leaks polymorphism");
}