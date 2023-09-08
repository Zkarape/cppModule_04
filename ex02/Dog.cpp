#include "Dog.hpp"

Dog::Dog() 
    :   A_Animal(), 
        _b(new Brain())
{
    std::cout << "Dog default constructor called!!" << std::endl;
}

Dog::Dog(const std::string &type) : A_Animal(type), _b(new Brain())
{
    std::cout << "Dog parametrized constructor called!!" << std::endl;
}

Dog::Dog(const Dog &dog):_b(new Brain(*dog._b))
{
    std::cout << "Dog copy constructor called!!" << std::endl;
}

Dog &Dog::operator=(const Dog &c)
{
    if (this == &c)
        return (*this);
    delete _b;
    _b = new Brain(*c._b);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog makesound() called: Haf-Haf!!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!!" << std::endl;
    // std::cout << __PRETTY_FUNCTION__ << std::endl;
    delete _b;
}