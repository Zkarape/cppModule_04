#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal
{
private:
    Brain *_b;
public:
    WrongCat();
    WrongCat(const std::string &);
    WrongCat(const WrongCat &cat);
    WrongCat &operator=(const WrongCat &c);
    void makeSound() const;
    ~WrongCat();
};

#endif