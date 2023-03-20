#include "coin.h"
int main(int argc, char**){
    coin c1;
    for (int i = 0; i < 20; i++)
    {
        cout << "Flip number " << i+1 << ": ";
        c1.flip();
        c1.display();
    }
    
    return 0;
}