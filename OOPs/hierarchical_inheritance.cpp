#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "dog can bark" << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Dog myDog;
    Cat myCat;
    myDog.sound();
    myDog.bark();

    myCat.sound();
    myCat.meow();
    return 0;
}