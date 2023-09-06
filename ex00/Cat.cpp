#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called!!" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Cat makesound() called: Meauu!!" << std::endl;
    this->setType("Cat");
}

Cat::~Cat()
{
    std::cout << "Cat destructor called!!" << std::endl;
}