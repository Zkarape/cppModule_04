#include "Cat.hpp"

Cat::Cat() 
    :   A_Animal(), 
        _b(new Brain())
{
    std::cout << "Cat default constructor called!!" << std::endl;
}

Cat::Cat(const Cat &cat):_b(new Brain(*cat._b))
{
    std::cout << "Cat copy constructor called!!" << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
    if (this == &c)
        return (*this);
    delete _b;
    _b = new Brain(*c._b);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat makesound() called: Meauu!!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called!!" << std::endl;
    delete _b;
}