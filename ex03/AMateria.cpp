#include "AMateria.hpp"

AMateria::AMateria()
{}

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
}

AMateria::AMateria(std::string const &type) : _type(type) {}

void AMateria::use(ICharacter &target) {}

AMateria::~AMateria() {}