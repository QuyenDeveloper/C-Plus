#include <iostream>
using namespace std;

int main(int argc, char**){
    int speed, distance, time=0;

    cout << "What is the speed of the vehicle in mph: ";
    cin >> speed;

    while (speed<0)
    {
        cout << "Speed can't be negative, please enter again: ";
        cin >> speed;
    }
    
    cout << "How many hours has is traveled? : ";
    cin >> time;

    while (time<1)
    {
        cout << "Time can't be less than 1, please enter again: ";
        cin >> time;
    }

    cout << "Hour Distance Traveled\n--------------------------------------------\n";
    for (int i=1; i <= time; i++)
    {
        distance = i*speed;
        cout << i << "    " << distance << "\n";
    }
    

    return 0;
}