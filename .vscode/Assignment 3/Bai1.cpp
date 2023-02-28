#include <iostream>
using namespace std;

void swap(int &num1, int &num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(int argc, char**){
    
    int num1, num2;
    cout << "Input the value of 1st element :";
    cin >> num1;
    cout << "\nInput the value of 2st element :";
    cin >> num2;

    cout << "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1, num2);
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;
}