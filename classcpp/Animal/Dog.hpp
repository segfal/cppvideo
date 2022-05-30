#ifndef __DOG_HPP__
#define __DOG_HPP__
#include "Animal.hpp"


class Dog : public Animal
{
    public:
        Dog(std::string n , std::string s);
        void speak();//override

};


#include "Dog.cpp"






#endif