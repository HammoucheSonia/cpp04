#include "Brain.hpp"

Brain :: Brain()
{
    std :: cout <<"le constructeur brain a ete cree" << std :: endl;
}

Brain :: ~Brain()
{
    std :: cout << "Brain est mort"  << std :: endl;
}

Brain :: Brain(const Brain &src)
{
    std :: cout <<"Copy constructor called" << std :: endl;
    *this = src;
}

Brain&  Brain :: operator=(const Brain &other)
{
    std :: cout << "Copy assignment operator called" <<  std :: endl;
    for ( int i = 0; i < 100; i++ ) 
    {
        this->ideas[i] = other.ideas[i];
    }
    return (*this);
}