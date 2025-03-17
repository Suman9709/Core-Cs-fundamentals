#include <bits/stdc++.h>

using namespace std;
class Animal
{
public:
    void eat()
    {

        cout << "This animal is eating" << endl;
    }
};
// derived class inherit from animal
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dogs barks " << endl;
    }
};

int main()
{
    Dog dog;
    dog.eat();
    dog.bark();
    return 0;
}