#include <bits/stdc++.h>

using namespace std;
class Vehicle
{
public:
    void show()
    {
        cout << "This i sa vehicle" << endl;
    }
};
class Car : public Vehicle
{
};

int main()
{
    Car mycar;
    mycar.show();
    return 0;
}