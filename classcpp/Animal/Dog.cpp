#include "Dog.hpp"





Dog::Dog(std::string n , std::string s) : Animal(n,s)
{
    
}



void Dog::speak()
{
    std::cout << getname() << " the dog says " << getsound() << std::endl;
}
