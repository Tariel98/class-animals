#ifndef __ANIMALS_H__
#define __ANIMALS_H__
#include <string>


class Animals
{
    public:
        Animals();
        virtual void toFeed();
        virtual void makeSound();
        void set_name(std::string);
        void set_id(int);
        std::string get_name();
        int get_id();

    protected:
        std::string m_name;
        int m_id;
};

 
class Dog : public Animals
{
    public:
        Dog();
        virtual void toFeed();
        virtual void makeSound();
        void set_breed(std::string);
        void set_color(std::string);
        std::string get_breed();
        std::string get_color();

    private:
        std::string m_breed;
        std::string m_color;
};

class Cat : public Dog
{
    public:
        Cat();
        void toFeed();
        void makeSound();
};

#endif
