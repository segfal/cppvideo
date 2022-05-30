#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>


class Animal
{
    private:
        std::string name;
        std::string sound;
    public:
        Animal();
        Animal(std::string wrong);
        Animal(std::string n, std::string s);
        std::string getname();
        std::string getsound();
        void setname(std::string n);
        void setsound(std::string s);
        void speak();

};



#include "Animal.cpp"


#endif