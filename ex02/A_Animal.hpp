#ifndef A_ANIMAL_HPP
#define A_ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class A_Animal
{
protected:
    std::string _type;
public:
    A_Animal();
    A_Animal(const std::string &);
    A_Animal(const A_Animal &copy);
    A_Animal &operator=(const A_Animal &assign);
    const std::string &getType() const;
    virtual void makeSound() const = 0;
    virtual ~A_Animal();
};

#endif