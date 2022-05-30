#ifndef __PARROT_HPP__
#define __PARROT_HPP__

#include "Animal.hpp"




class Parrot : public Animal
{
    public:
        Parrot(std::string n , std::string s);
        void speak();//override
        
};




#include "Parrot.cpp"



#endif