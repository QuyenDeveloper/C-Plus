#include "FreezingandBoilingPoints.h"
int main(int argc, char**){
    int temp;
    cout << "Enter temperature: " << endl;
    cin >> temp;
    Substance s1(temp);
    if (s1.isEthylBoiling()){
       cout << "Ethy is Boiling" << endl;
    }else if (s1.isEthylFreezing()){
       cout << "Ethy is Freezing" << endl;
    }
    
    if (s1.isOxygenFreezing())
    {
       cout << "Oxygen is Freezing" << endl;
    }else if (s1.isOxygenBoiling()) {
       cout << "Oxygen is Boiling" << endl;
    }
    
    
    return 0;
}