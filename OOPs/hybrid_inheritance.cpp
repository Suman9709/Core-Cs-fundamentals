#include <bits/stdc++.h>
using namespace std;

class Engine
{
public:
    void engineType()
    {
        cout << "This is engine " << endl;
    }
};

class Vehicle
{
public:
    void vehicleType()
    {
        cout << "This is 2wheeler vehicle" << endl;
    }
};

// Hybride inheritance:car can inherit from both engine and vehicle

class Car : public Engine, public Vehicle
{
};
class Bike : public Vehicle
{
};
int main()
{
    Car mycar;
    Bike myBike;

    mycar.engineType();
    mycar.vehicleType();

    myBike.vehicleType();

    return 0;
}