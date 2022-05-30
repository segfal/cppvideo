#include "Cat.hpp"




Cat::Cat(std::string n , std::string s) : Animal(n,s)
{
    
}


void Cat::speak()
{
    std::cout << this->getname() << " the cat says " << this->getsound() << std::endl;
}
