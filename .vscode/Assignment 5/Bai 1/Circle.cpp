#include "Circle.h"
Circle::Circle(){
    this->radius = 0.0;
    this->area = getArea();
    this->diameter = getDiameter();
    this->circumference = getCircumference();
}
Circle::Circle(double radius){
    this->radius = radius;
    this->area = getArea();
    this->diameter = getDiameter();
    this->circumference = getCircumference();
}
void Circle::setRadius(double radius){
    this->radius = radius;
}
double Circle::getRadius(){
    return this->radius;
}
double Circle::getArea(){
    return this->pi * this->radius * this->radius;
}
double Circle::getDiameter() {
    return this->radius * 2;
}
double Circle::getCircumference() {
    return 2 * this->pi * this->radius;
}
void Circle::display(){
    cout << "Circle area: " << this->area << ", Diameter: " << this->diameter << ", Circumference: " << this->circumference << endl;
}