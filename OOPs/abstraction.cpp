#include <bits/stdc++.h>

using namespace std;
class Shape
{
public:
    // pure virtual function no defination
    virtual void area() = 0;
};

class Rectangle : public Shape
{
private:
    int length, width;

public:
    // constructor
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    // overriding the area method;

    void area() override
    {
        cout << "Area of Reactangle: " << length * width << endl;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    void area() override
    {
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Shape *shape; // pointer to base class
    Rectangle rect(5, 5);
    Circle circle(7);
    // access area through base class ponter
    shape = &rect;
    shape->area();

    shape = &circle;
    shape->area();
    return 0;
}