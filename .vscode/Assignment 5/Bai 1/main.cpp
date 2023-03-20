#include "Circle.h"
int main(int argc, char**){
    double a;
    cout << "Input Circle radius: ";
    cin >> a;
    Circle c1(a);
    c1.display();

    return 0;
}