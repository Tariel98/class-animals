#include "animals.h"
#include <iostream>

int main () 
{
    Dog dog;
    Cat cat;

    std::cout << "====================================" << std::endl;
    dog.toFeed();
    std::cout << "====================================" << std::endl;

    cat.toFeed();
    std::cout << "====================================" << std::endl;

    dog.set_name("Max");
    dog.set_id(123456);
    dog.set_breed("Doberman");
    dog.set_color("Black");

    cat.set_name("Oliver");
    cat.set_id(412254);
    cat.set_breed("Bombay");
    cat.set_color("Black");

    std::cout << "====================================" << std::endl;
    std::cout << "Dog breed: " << dog.get_breed() << std::endl;
    std::cout << "Dog color: " << dog.get_color() << std::endl;
    std::cout << "Dog name: " << dog.get_name() << std::endl;
    std::cout << "Dog id: "   << dog.get_id() << std::endl;
    std::cout << "====================================" << std::endl;

    std::cout << "Cat breed: " << cat.get_breed() << std::endl;
    std::cout << "Cat color: " << cat.get_color() << std::endl;
    std::cout << "Cat name: " << cat.get_name() << std::endl;
    std::cout << "Cat id: "   << cat.get_id() << std::endl;
    std::cout << "====================================" << std::endl;
}