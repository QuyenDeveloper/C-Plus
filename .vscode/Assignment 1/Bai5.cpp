#include <iostream>
#include <algorithm>
using namespace std;

double calAvgScore(int arr[50], int num){
    int *ptr;
    double avgScore = 0.0,totalScore;
    ptr = &arr[0];
    for (int i = 0; i < num; i++)
    {
        totalScore += *ptr;
        ptr++;
    }
    avgScore = totalScore / num;
    return avgScore;
}

int main(int argc, char**){
    int *ptr, num, arr[50];
    double avgScore = 0;
    
    cout << "Enter the number of scores: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "Score No." << i << ": ";
        cin >> arr[i];
        while (arr[i] < 0)
        {
            cout << "Score does not accept negative numbers, please re-enter: ";
            cin >> arr[i];
        }
        
    }

    ptr = &arr[0];  
    cout << "Array entered: ";
    for (int i = 0; i < num; ++i){
        cout << *ptr << " ";
        ptr++;
    } 

    sort(arr,arr+num);
    ptr = &arr[0]; 
    cout << "Sorted Array: ";
    for (int i = 0; i < num; ++i){
        cout << *ptr << " ";
        ptr++;
    }

    avgScore = calAvgScore(arr,num);
    cout << "Average Score: " << avgScore << endl;


    return 0;
}