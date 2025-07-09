# include <bits/stdc++.h>
using namespace std;

class Engine{
    public:
    void engineType(){
        cout<<"This is a engine"<<endl;
    }
};

class Wheels {
    public:
    void countwheel(){
        cout<<"vehicle has 4 wheel"<<endl;
    }
};

class Car : public Engine, public Wheels{

};

int main(){
    Car mycar;
    mycar.engineType();
    mycar.countwheel();
    return 0;
}