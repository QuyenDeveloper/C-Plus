#include <iostream>
using namespace std;

int main(int argc, char**){
    int arr[50], arr2[50];  
    int *ptr, i, num;  
    cout <<" Number of array elements to be entered: "<< endl;  
    cin >> num;     
      
    cout <<" Enter the elements: ";  
    for (i = 0; i < num; i++)  
    {  
        cin >> arr[i];  
    }  

    ptr = &arr[0];  
    cout <<" Entered elements of the array are: \n" <<endl;  
    for (i = 0; i < num; i++)  
    {  
        cout << "\t" << *ptr;
        ptr++;
    }  
    
    ptr--;
    for ( i = 0; i < num; i++)  
    {  
        arr2[i] = *ptr;  
        ptr--;  
    }  

    ptr = &arr2[0];  
    for ( i = 0; i < num; i++)  
    {  
        arr[i] = *ptr;  
        ptr++; 
    }  
    ptr = &arr[0];
    cout <<" \n The reversed array elements are: \n " << endl;  
      
    for ( i = 0; i < num; i++)  
    {  
        cout <<" \t " << *ptr <<endl;  
        ptr++;  
    }  
    return 0;  
}