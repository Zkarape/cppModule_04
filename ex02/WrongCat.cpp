#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called!!" << std::endl;
}

WrongCat::WrongCat(const std::string &type) : WrongAnimal(type), _b(new Brain)
{
    std::cout << "WrongCat parametrized constructor called!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat):_b(new Brain(*cat._b))
{
    std::cout << "WrongCat copy constructor called!!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &c)
{
    if (this == &c)
        return (*this);
    delete _b;
    _b = new Brain(*c._b);
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makesound() called: Meauu!!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!!" << std::endl;
    delete _b;
}