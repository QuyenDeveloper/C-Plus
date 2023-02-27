#include <iostream>
using namespace std;
const int GRID_SIZE = 3; 
int* inputArray();
void display(int *ptr);
int calculate(int array[][GRID_SIZE]);

int main(int argc, char**){
    int arr[GRID_SIZE][GRID_SIZE], *ptr, result;
    ptr = inputArray();
    display(ptr);
    result = calculate(arr);
    if (result == 0)
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
int calculate(int arr[][GRID_SIZE]){
    int v_max = 0, v_maxT = 0, vali_v = 0;
    for (int colum = 0; colum < GRID_SIZE; colum++)
    {
        for (int row = 0; row < GRID_SIZE; row++)
        {
            v_maxT += arr[row][colum];
        }

        cout << v_maxT << endl;
        if (v_max == 0){
            v_max = v_maxT;
        }else if (v_max == v_maxT){
            if (vali_v == 1){
                break;
            }
            vali_v = 0;
        }else{
            vali_v = 1;
        }

        v_maxT = 0;
    }
    
    return vali_v;
}
// int calculate(int *ptr){
//     int v_max = 0,v_maxT = 0, h_max = 0,h_maxT = 0, c_max = 0, c_maxT = 0, a=0, vali_v = 0, vali_h = 0, vali_c = 0;
//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             v_maxT += *(ptr + a);
//             a+=3;
//         }

//         if (v_max == 0){
//             v_max = v_maxT;
//         }else if (v_max == v_maxT){
//             if (vali_v == 1){
//                 break;
//             }
//             vali_v = 0;
//         }else{
//             vali_v = 1;
//         }
        
//         v_maxT = 0;
//         a-=8;
//     }

//     //Calulate horizontal
//     a = 0;
//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++)
//         {
//             h_maxT += *(ptr + a);
//             a+=1;
//         }
//         if (h_max == 0){
//             h_max = h_maxT;
//         }else if (h_max == h_maxT){
//             if (vali_h == 1){
//                 break;
//             }
//             vali_h = 0;
//         }else{
//             vali_h = 1;
//         }
//         cout << "Vertical: " << h_maxT << endl;
//         h_maxT = 0;
//     }
    
//     a = 0;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             c_maxT += *(ptr + a);
//             a+=4;
//         }
//         a-=6;
//     }
    

//     return vali_h;
// }