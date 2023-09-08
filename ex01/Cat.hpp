#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const std::string &);
    Cat(const Cat&);
    Cat &operator=(const Cat &a);
    virtual void makeSound() const; //override;
    virtual ~Cat();
};

#endif