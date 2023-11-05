#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
    }
}

Character::Character(const std::string &name) : _name(name)
{
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
    }
}

Character::Character(const Character &copy) : _name(copy._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy._inventory[i])
            _inventory[i] = copy._inventory[i]->clone();
    }
}

Character &Character::operator=(const Character &assign)
{
    if (this != &assign)
    {
        _name = assign._name;
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
            {
                delete _inventory[i];
                this->_inventory[i] = NULL;
            }
            if (assign._inventory[i])
                this->_inventory[i] = assign._inventory[i]->clone();
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
    int i = -1;

    if (!m)
        return;
    while (++i < 4)
    {
        if (_inventory[i] == m)
            return;
    }
    i = 0;
    while (i < 4 && _inventory[i] != 0)
        i++;
    if (i >= 4)
    {
        std::cout << _name << " can't equip more than 4 Materias";
        return;
    }
    _inventory[i] = m;
    std::cout << this->_name << " equipped materia " << m->getType() << " in slot " << i << "\n";
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !(this->_inventory)[idx])
    {
        std::cout << "Nothing found to unequip at index " << idx << std::endl;
        return;
    }
    std::cout << this->_name << " unequipped " << _inventory[idx]->getType() << " at slot " << idx << "\n"; // maybe for printing??
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4 || !(this->_inventory)[idx])
    {
        std::cout << "Nothing found to use at index " << idx << std::endl;
        return;
    }
    _inventory[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->_inventory[i];
    }
}