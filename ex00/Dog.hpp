#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        virtual ~Dog();
        virtual void makeSound() const;
        std :: string get_type() const;
};