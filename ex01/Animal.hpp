#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <ostream>

class Animal
{
    protected:
        std :: string type; 
    public :
        Animal();
        virtual ~Animal();
        Animal(const Animal &src);
        Animal& operator=(const Animal &other);
        virtual void makeSound() const;
        std :: string get_type() const;
};



#endif 