#include <iostream>
using namespace std;

int* inputArray();
void display(int *ptr);
int calculate(int *ptr);

int main(int argc, char**){
    int arr[3][3], *ptr, result;
    ptr = inputArray();
    display(ptr);
    result = calculate(ptr);
    if (result != 0)
    {
        cout << "the array is a Lo Shu Magic Square";
    }else{
        cout << "the array is not a Lo Shu Magic Square";
    }
    
    return 0;
}

int* inputArray(){
    static int arr[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            while (arr[i][j] > 9)
            {
                cout << "Number cann't be greater than 9, please enter again: ";
                cin >> arr[i][j];
            }
            
        }
    }
    return *arr;
}

void display(int *ptr){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            cout << *ptr << "   ";
            ptr++;
        }
        cout << endl;
    }
}

int calculate(int *ptr){
    int max1 = 0, max2 = 0, a=0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            max1+=*ptr;
            ptr++;
        }

        if (max2 == 0){
            max2 = max1;
        }else if(max1 == max2){
            a = 1;
        }else{
            a = 0;
        }
        cout << max1 << endl;
        max1 = 0;
    }
    return a;
}