#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called!!" << std::endl;
}

Cat::Cat(const std::string &type) : Animal("Cat")
{
    std::cout << "Cat class's parametrized constructor called!!" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    *this = cat;
    std::cout << "Cat class's copy constructor called!!" << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat makesound() called: Meauu!!" << std::endl;
}

Cat::~Cat()
{
    std::cout << this->_type << "Cattt destructor called!!" << std::endl;
}