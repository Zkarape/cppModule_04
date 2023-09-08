#ifndef CAT_HPP
# define CAT_HPP

#include "A_Animal.hpp"

class Cat : public A_Animal
{
private:
    Brain *_b;
public:
    Cat();
    Cat(const Cat&);
    Cat &operator=(const Cat &a);
    virtual void makeSound() const; //override;
    virtual ~Cat();
};

#endif