#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "A_Animal.hpp"

class Dog : public A_Animal
{
private:
    Brain *_b;
public:
    Dog();
    Dog(const std::string &);
    Dog(const Dog &);
    Dog &operator=(const Dog &a);
    virtual void makeSound() const;
    virtual ~Dog();
};

#endif