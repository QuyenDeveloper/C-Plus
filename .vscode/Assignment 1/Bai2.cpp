#include <iostream>
#include <math.h>
using namespace std;

int quadraticEquation(float a, float b, float c,float &x1, float &x2){
    float delta = b * b - 4 * a * c;
    if(delta<0){
        x1=x2=0.0;
        return 0;
    } else if(delta==0){
        x1 = x2 = -b/(2*a);
        return 1;
    } else{
        delta = sqrt(delta);
        x1 = (-b + delta) / (2*a);
        x2 = (-b - delta) / (2*a);
        return 2;
    }
}

int main(int argc, char**){
    float a, b, c;
    float x1,x2;
    cout << "This program is to solve ax^2+ bx + c = 0.\n----------------------------------------------------------------\n";
    cout << "Enter a: "; cin >> a;

    while (a==0)
    {
        cout << "'a' cant be 0, please enter again: "; cin >> a;
    }
    

    cout << "Enter b: "; cin >> b;
    cout << "Enter c: "; cin >> c;
    while(!a);
        int numNo = quadraticEquation(a,b,c,x1,x2);
    if(numNo == 0) {
        cout << "The equation has no solution";
    } else if(numNo == 1){
        cout << "Equation with double solution x = " << x1;
    } else{
        cout << "The equation has 2 distinct solutions x1 = " << x1 << ", x2 = "<< x2;
    }
    return 0;
}