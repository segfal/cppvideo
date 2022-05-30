
#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"


class Cat : public Animal
{
    public:
        Cat(std::string n , std::string s);
        void speak();//override

        
};


#include "Cat.cpp"

#endif