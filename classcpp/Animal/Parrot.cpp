




#include "Parrot.hpp"


Parrot::Parrot(std::string n , std::string s) :Animal(n,s)
{
    
}


void Parrot::speak()
{
    std::cout << this->getname() << " the parrot says " << this->getsound() << std::endl;
}
