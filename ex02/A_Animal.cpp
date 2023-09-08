#include "A_Animal.hpp"

A_Animal::A_Animal()
{
    std::cout << "A_Animal class default constructor called!!" << std::endl;
}

A_Animal::A_Animal (const std::string &type) 
    :   _type(type)
{
    std::cout << "A_Animal class parametrized constructor called!!" << std::endl;
}

A_Animal::A_Animal(const A_Animal &copy)
{
    *this = copy;
    std::cout << "A_Animal class copy constructor called!!" << std::endl;
}

A_Animal&   A_Animal::operator=(const A_Animal &assign)
{
    if (this == &assign)
        return (*this);
    _type = assign._type;
    return (*this);
}

const std::string &A_Animal::getType() const
{
    return (_type);
}

A_Animal::~A_Animal()
{
    std::cout << "A_Animal destructor called!!" << std::endl;
}