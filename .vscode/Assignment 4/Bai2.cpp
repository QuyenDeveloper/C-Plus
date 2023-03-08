#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

class Car{
    string yearModel;
    string make;
    int speed;
    public:
        Car(string yearModel, string make){
            this->yearModel = yearModel;
            this->make = make;
            this->speed = 0;
        }
        Car(string yearModel, string make,int speed){
            this->yearModel = yearModel;
            this->make = make;
            this->speed = speed;
        }
        string getYear() { return this->yearModel; }
        void setYear(string year) { this->yearModel = year; }
        string getMake() { return this->make; }
        void setMake(string make) { this->make = make; }
        void accelerate(){
            this->speed += 5;
        }
        void brake(){
            this->speed -= 5;
        }
        void displaySpeed(){
            cout << speed << " Km/h" << endl;
        }
};

int main(int argc, char**){
    Car lambo("2015","America");
    Car lambo2("2010","America",20);
    int key = 0;
    while (key != 27){
        key = _getch();
        if (key == 119){
            lambo.accelerate();
            cout << "Accelerating: ";
            lambo.displaySpeed();
        }else if (key == 115){
            lambo.brake();
            cout << "Decelerating: ";
            lambo.displaySpeed();
        }
    }
    return 0;
}