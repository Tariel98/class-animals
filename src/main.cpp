#include "animals.h"
#include <iostream>

int main () 
{
    Dog dog;
    Cat cat;
    Dog dog1;
    
    std::cout << "====================================" << std::endl;

    std::cout << "|  Base* catt = new Cat | : ";
    Animals* catt = new Cat;
    catt->toFeed();

    std::cout << "|  Base* dogg = new Dog | : ";
    Animals* dogg = new Dog;
    dogg->toFeed();

    std::cout << "====================================" << std::endl;
    dog.toFeed();
    std::cout << "====================================" << std::endl;

    cat.toFeed();
    std::cout << "====================================" << std::endl;
    
    dog1.set_name("Rocky");
    dog1.set_id(10002);
    dog1.set_breed("Avcharka");
    dog1.set_color("Black");
    dog.set_color("Black" );
    dog.set_name("Max");
    dog.set_id(10000);
    dog.set_breed("Doberman");
    dog.set_color("Black");

    cat.set_name("Oliver");
    cat.set_id(10001);
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

    std::cout << "====================================" << std::endl;
    std::cout << "Dog1 breed: " << dog1.get_breed() << std::endl;
    std::cout << "Dog1 color: " << dog1.get_color() << std::endl;
    std::cout << "Dog1 name: " << dog1.get_name() << std::endl;
    std::cout << "Dog1 id: "   << dog1.get_id() << std::endl;
    std::cout << "====================================" << std::endl;
}
