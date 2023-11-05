#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type) {}

std::string const &AMateria::getType() const
{
    return (_type);
}

AMateria::AMateria(const AMateria &copy)
{
    this->_type = copy._type;
}

AMateria &AMateria::operator=(const AMateria &assign)
{
    this->_type = assign._type;
    return (*this);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria is used by " << target.getName() << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Destructor is called" << std::endl;
}