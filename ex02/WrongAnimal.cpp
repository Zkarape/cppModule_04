#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
    std::cout << "WrongAnimal default constructor called!!" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
    std::cout << "WrongAnimal parametrized constructor called!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
    std::cout << "WrongAnimal copy constructor called!!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
    if (this == &assign)
        return (*this);
    _type = assign._type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makesound() called" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
    return (_type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor called!!" << std::endl;
}