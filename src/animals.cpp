#include "animals.h"
#include <iostream>

Animals::Animals()
        : m_name("")
        , m_id(0)
            {}

void Animals::toFeed()
{
    std::cout << "Feed animal" << std::endl; 
}

void Animals::makeSound()
{
    std::cout << "Sound animal" << std::endl;
}

void Animals::set_name(std::string name)
{
    m_name = name ;
}

std::string Animals::get_name()
{
    return m_name;
}

void Animals::set_id(int id)
{
    m_id = id; 
}

int Animals::get_id()
{
    return m_id;
}

Dog::Dog()
    : Animals()
    , m_breed("")
    , m_color("")
    {}

void Dog::toFeed()
{
    std::cout << "The dog eats meat" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "The dog is barking" << std::endl;
}

void Dog::set_breed(std::string breed)
{
    m_breed = breed;
}

void Dog::set_color(std::string color)
{
    m_color = color;
}

std::string Dog::get_breed()
{
    return m_breed;
}

std::string Dog::get_color()
{
    return m_color;
}

Cat::Cat()
    :Dog() 
    {}

void Cat::toFeed()
{
    std::cout << "A cat eats a mouse" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "The cat is purring" << std::endl;
}

