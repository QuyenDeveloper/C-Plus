#include "coin.h"
coin::coin(){
    srand(time(NULL));
}
void coin::flip(){
    int x = rand() % 2;
    this-> sideUp = side[x];
    if (x == 0)
    {
        this -> headCount +=1;
    }else{
        this->tailCount +=1;
    }
    
}
string coin::getSideUp(){
    return this-> sideUp;
}
void coin::display(){
    cout << "Coin side up: " << this->sideUp << endl;
    cout << "Coin count: " << this->headCount << " head, " << this->tailCount << " tail" << endl;
}