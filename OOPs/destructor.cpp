#include <bits/stdc++.h>

using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor is called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor is called" << endl;
    }
};
int main()
{
    Demo obj;

    return 0;
}