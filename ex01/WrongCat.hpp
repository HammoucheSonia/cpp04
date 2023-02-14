#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        virtual ~WrongCat();
        virtual void makeSound() const;
        std :: string get_type() const;
};