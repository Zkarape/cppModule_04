#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called!!" << std::endl;
}

Dog::Dog(const std::string &type) : Animal("Dog")
{
    std::cout << "Dog class's parametrized constructor called!!" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
    std::cout << "Dog class's copy constructor called!!" << std::endl;
}

Dog &Dog::operator=(const Dog &c)
{
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog makesound() called: Haf-Haf!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->_type << " destructor called!!" << std::endl;
}