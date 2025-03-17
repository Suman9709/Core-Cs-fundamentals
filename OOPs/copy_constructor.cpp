#include <bits/stdc++.h>

using namespace std;
class Demo
{

public:
    int x;

    // parameterized constructor
    Demo(int a)
    {
        x = a;
    }

    // copy constructor

    Demo(const Demo &obj)
    {
        x = obj.x;
    }

    void display()
    {
        cout << "Value: " << x << endl;
    }
};

int main()
{
    Demo obj1(5);
    Demo obj2 = obj1;

    obj2.display();
    return 0;
}