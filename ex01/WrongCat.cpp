#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called!!" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat class's parametrized constructor called!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat)
{
    *this = cat;
    std::cout << "WrongCat class's copy constructor called!!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &c)
{
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makesound() called: Meauu!!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!!" << std::endl;
}