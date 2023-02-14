#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat :: Cat()
{
    this->type  = "Cat";
    this->brain = new Brain;
    std :: cout << "le chat est nee" << std :: endl;
}

Cat :: ~Cat()
{
    delete (this->brain);
    std :: cout << "le chat est mort" << std :: endl;
}

Cat::Cat( const Cat& src )
{
    *this = src;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "Cat copy called." << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        this->brain = new Brain( *src.brain );
    }
    return *this;
}

std :: string Cat :: get_type() const
{
    return (this->type);
}

void Cat :: makeSound() const
{
    std :: cout  << "Miaww..." << std :: endl;
}