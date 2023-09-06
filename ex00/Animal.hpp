#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
private:
    std::string _type;
public:
    Animal();
    void setType(const std::string &type);
    ~Animal();
};

#endif