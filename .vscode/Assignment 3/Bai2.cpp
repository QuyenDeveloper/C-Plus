#include <iostream>
using namespace std;
void inputArray(int *array,int n);
void sum(int *array,int n);
int main(int argc, char**){
    int n;
    cout << "Input the number of elements to store in the array (max 10) :";
    cin >> n;
    while (n>10)
    {
        cout << "Number of elements can't be greater than 10, please enter again:";
        cin >> n;
    }
    int array[n];
    inputArray(array, n);
    sum(array, n);
    return 0;
}

void inputArray(int *array,int n){
    for (int i = 0; i < n; i++)
    {
        cout << "element - " << i << " : ";
        cin >> *array;
        array++;
    }   
}

void sum(int *array,int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *array;
        array++;
    }
    cout << "The sum of array is: " << sum;
}