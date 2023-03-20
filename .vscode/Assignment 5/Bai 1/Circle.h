#include <iostream>
using namespace std;
class Circle{
    private:
        double radius;
        double pi = 3.14159;
        double area;
        double diameter;
        double circumference;
    public:
        Circle();
        Circle(double radius);
        void setRadius(double radius);
        double getRadius();
        double getArea();
        double getDiameter();
        double getCircumference();
        void display();
};

