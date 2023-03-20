#ifndef coin_flip
#define coin_flip

#include <iostream>
#include <time.h> 
#include <stdlib.h>
using namespace std;
class coin{
    private:
        string side[2] = {"head","tail"};
        string sideUp;
        int headCount = 0;
        int tailCount = 0;
    public:
        coin();
        void flip();
        string getSideUp();
        void display();
};
#endif