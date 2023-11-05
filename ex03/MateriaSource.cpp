#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        this->_templates[i] = nullptr;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; i++)
    {
        // do I need to check for nullptr
        this->_templates[i] = copy._templates[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign)
{
    if (this != &assign)
    {
        for (int i = 0; i < 4; i++)
        {
            delete _templates[i];
            this->_templates[i] = assign._templates[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *obj)
{
    int i = 0;

    if (!obj)
        return;
    while (i < 4 && _templates[i])
        i++;
    if (i >= 4)
    {
        std::cout << "Can't store more than 4 Materias";
        return;
    }
    _templates[i] = obj;
    std::cout << " learned materia of type " << obj->getType() << "\n";
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_templates[i]->getType() == type)
        {
            return (this->_templates[i]->clone());
        }
    }
    return nullptr;
}


MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->_templates[i];
    }
}