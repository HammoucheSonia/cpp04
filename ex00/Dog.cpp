#include "Dog.hpp"
#include <iostream>

Dog :: Dog()
{
    this->type  = "Dog";
    std :: cout << "le chien est nee" << std :: endl;
}

Dog :: ~Dog()
{
    std :: cout << "le chien est mort" << std :: endl;
}

void Dog :: makeSound() const
{
    std :: cout  << "WafWaf..." << std :: endl;
}

std :: string Dog :: get_type() const
{
    return (this->type);
}
