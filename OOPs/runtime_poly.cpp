#include <bits/stdc++.h>

using namespace std;

class Animal
{
public:
    // virtual function
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};
// derived class
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Dog barks" << endl;
    }
};
// derived class
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meow" << endl;
    }
};

int main()
{
    Animal *animal; // base class pointer
    Dog dog;
    Cat cat;
    animal = &dog;
    animal->sound(); // pointing to Dog object
    animal = &cat;   // pointing to Cat object
    animal->sound();
    return 0;
}