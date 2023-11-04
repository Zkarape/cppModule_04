#include "Character.hpp"

Character::Character() {}

Character::Character(const std::string &name) : _name(name)
{
    std::cout << "A character named \"" << _name << "\" was created\n";
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = nullptr;
    }
}

Character::Character(const Character &copy) : _name(copy._name)
{
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = copy._inventory[i]->clone();//so beautiful connection
    }
}

Character &Character::operator=(const Character &assign)
{
    if (this != &assign)
    {
        _name = assign._name;
        for (int i = 0; i < 4; i++)
        {
            delete _inventory[i];
            this->_inventory[i] = assign._inventory[i]->clone();//do I need to check for nullptr??
        }
    }
    return *this;
}

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    int i = 0;

    if (!m)
        return;
    while (i < 4 && _inventory[i] != 0)
        i++;
    if (i >= 4)
    {
        std::cout << _name << " can't equip more than 4 Materia";
        return;
    }
    _inventory[i] = m;
    std::cout << this->_name << " equipped materia " << m->getType() << " in slot " << i << "\n";
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter &target)
{
    _inventory[idx]->use(target);
}

Character::~Character() {}