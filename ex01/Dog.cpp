#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog :: Dog()
{
    this->type  = "Dog";
    this->brain = new Brain;
    std :: cout << "le chien est nee" << std :: endl;
}

Dog :: ~Dog()
{
    delete (this->brain);
    std :: cout << "le chien est mort" << std :: endl;
}

Dog::Dog( const Dog& src )
{
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "Dog copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}

void Dog :: makeSound() const
{
    std :: cout  << "WafWaf..." << std :: endl;
}

std :: string Dog :: get_type() const
{
    return (this->type);
}
