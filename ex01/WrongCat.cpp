#include "WrongCat.hpp"
#include <iostream>

WrongCat :: WrongCat()
{
    this->type  = "WrongCat";
}

WrongCat :: ~WrongCat()
{
}

std :: string WrongCat :: get_type() const
{
    return (this->type);
}

void WrongCat :: makeSound() const
{
    std :: cout  << "Miaww..." << std :: endl;
}