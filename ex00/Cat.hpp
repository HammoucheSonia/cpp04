#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        virtual ~Cat();
        virtual void makeSound() const;
        std :: string get_type() const;
};