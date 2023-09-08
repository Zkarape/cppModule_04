#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(const std::string &);
    Animal(const Animal &copy);
    Animal &operator=(const Animal &assign);
    const std::string &getType() const;
    virtual void makeSound() const;
    virtual ~Animal();
};

#endif