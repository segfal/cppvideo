


#include "Animal.hpp"



Animal::Animal()
{
    std::cout << "Nothing is called" << std::endl;
}

Animal::Animal(std::string wrong)
{
    std::cout << "Only 1 parameter is added" << std::endl;
}




Animal::Animal(std::string n, std::string s)
{
    this->name = n;
    this->sound = s;
    
    
}


std::string Animal::getname()
{
    return this->name;
}



std::string Animal::getsound()
{
    return this->sound;
}


void Animal::setname(std::string n)
{
    this->name = n;
}


void Animal::setsound(std::string s)
{
    this->sound = s;
}



void Animal::speak()
{
    std::cout << this->name << " the animal says " << this->sound << std::endl;
}






