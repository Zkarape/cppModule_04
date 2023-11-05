#ifndef MATERIASOURCE
#define MATERIASOURCE

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
    MateriaSource();
    MateriaSource(const MateriaSource &);
    MateriaSource &operator=(const MateriaSource &);
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
    ~MateriaSource();
private:
    AMateria *(_templates[4]);
};

#endif