#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal :: WrongAnimal()
{
    this->type  = "un_WrongAnimal";
    std :: cout <<"le constructeur a ete cree" << std :: endl;
}

WrongAnimal :: ~WrongAnimal()
{
    std :: cout << this->type <<" est mort"  << std :: endl;
}

WrongAnimal :: WrongAnimal(const WrongAnimal &src)
{
    std :: cout <<"Copy constructor called" << std :: endl;
    *this = src;
}

WrongAnimal&  WrongAnimal :: operator=(const WrongAnimal &other)
{
    std :: cout << "Copy assignment operator called" <<  std :: endl;
    type = other.type;
    return (*this);
}

void WrongAnimal :: makeSound() const
{
    std :: cout << "j'ai le son d'un WrongAnimal" << std :: endl;
}

std :: string WrongAnimal :: get_type() const
{
    return (this->type);
}