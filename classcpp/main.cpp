#include <iostream>
#include "Animal/imp.hpp"


// Function: main
// Purpose:
/**
 * @brief We will be learning about the following:
 * - Classes
 * - Constructors
 * - Default Constructors
 * - Overloading
 * - Setters
 * - Getters
 * - Inheritance
 * - Polymorphism
 * 
 * @cite https://www.tutorialspoint.com/cplusplus/cpp_classes.html
 * @cite https://www.w3schools.com/cpp/cpp_polymorphism.asp
 */












int main()
{
    Dog Fido("Fido", "Woof");
    Cat Garfield("Garfield", "Meow");
    //Fido.speak();
    //std::cout << "Fido's name is " << Fido.getname() << std::endl;

    //Garfield.speak();
    //std::cout << "Garfield's name is " << Garfield.getname() << std::endl;

    Parrot P1("Polly", "Chirp");
    P1.speak();

}