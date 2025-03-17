#include <bits/stdc++.h>

using namespace std;

class Math
{
public:
    // function to add two integer
    int add(int a, int b)
    {
        return a + b;
    }
    // function to add three integer
    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    // function to add double value

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Math math;
    cout << "Addition of two integers: " << math.add(5, 10) << endl;
    cout << "Adding three integers: " << math.add(10, 5, 10) << endl;
    cout << "Add double value: " << math.add(5.5, 10.1) << endl;
    return 0;
}