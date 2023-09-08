#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>
#include "Brain.hpp"

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal();
    WrongAnimal(const std::string &);
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &assign);
    const std::string &getType() const;
    void makeSound() const;
    ~WrongAnimal();
};

#endif