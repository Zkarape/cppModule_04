#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        this->_templates[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy._templates[i])
            this->_templates[i] = copy._templates[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign)
{
    if (this != &assign)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_templates[i])
            {
                delete _templates[i];
                _templates[i] = NULL;
            }
            if (assign._templates[i])
                this->_templates[i] = assign._templates[i]->clone();
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *obj)
{
    int i = -1;

    if (!obj)
        return;
    while (++i < 4)
    {
        if (_templates[i] == obj)
            return ;
    }
    i = 0;
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
        if (this->_templates[i] && this->_templates[i]->getType() == type)
        {
            return (this->_templates[i]->clone());
        }
    }
    return NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->_templates[i];
    }
}