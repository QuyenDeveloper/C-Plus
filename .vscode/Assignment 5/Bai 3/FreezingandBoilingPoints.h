#include <iostream>
using namespace std;

class Substance{
    private:
        int Temperature;
    public:
        Substance();
        Substance(int temperature);
        int getTemperature();
        void setTemperature(int temperature);
        bool isEthylFreezing();
        bool isEthylBoiling();
        bool isOxygenFreezing();
        bool isOxygenBoiling();
        bool isWaterFreezing();
        bool isWaterBoiling();
        void display();
};