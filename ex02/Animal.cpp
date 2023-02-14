#include "Animal.hpp"
#include <iostream>

Animal :: Animal()
{
    this->type  = "un_animal";
    std :: cout <<"le constructeur a ete cree" << std :: endl;
}

Animal :: ~Animal()
{
    std :: cout << this->type <<" est mort"  << std :: endl;
}

Animal :: Animal(const Animal &src)
{
    std :: cout <<"Copy constructor called" << std :: endl;
    *this = src;
}

Animal&  Animal :: operator=(const Animal &other)
{
    std :: cout << "Copy assignment operator called" <<  std :: endl;
    type = other.type;
    return (*this);
}

void Animal :: makeSound() const
{
    std :: cout << "j'ai le son d'un animal" << std :: endl;
}

std :: string Animal :: get_type() const
{
    return (this->type);
}

