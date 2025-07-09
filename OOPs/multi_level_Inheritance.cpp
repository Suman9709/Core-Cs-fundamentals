# include<bits/stdc++.h>
using namespace std;

class Animal{
public:
void breath(){
    cout<<"Animal can breate"<<endl;
}
};

class Mammel : public Animal{
public:
void walk(){
    cout<<"mammel can walk"<<endl;
}
};

class Dog : public Mammel{
    public:
    void bark(){
        cout<<"Dog id barking"<<endl;
    }
};

int main(){
    Dog mydog;
    mydog.breath();
    mydog.walk();
    mydog.bark();
}
