#include "Cat.hpp"
#include <iostream>

Cat :: Cat()
{
    this->type  = "Cat";
    std :: cout << "le chat est nee" << std :: endl;
}

Cat :: ~Cat()
{
    std :: cout << "le chat est mort" << std :: endl;
}

std :: string Cat :: get_type() const
{
    return (this->type);
}

void Cat :: makeSound() const
{
    std :: cout  << "Miaww..." << std :: endl;
}