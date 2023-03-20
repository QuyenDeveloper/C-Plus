#include "FreezingandBoilingPoints.h"
Substance::Substance(){

}

Substance::Substance(int temperature){
    this -> Temperature = temperature;
}

int Substance::getTemperature(){
    return this->Temperature;
}

void Substance::setTemperature(int temperature){
    this->Temperature = temperature;
}

bool Substance::isEthylFreezing(){
    if (this -> Temperature <= -173){
        return true;
    }else{
        return false;
    }
}

bool Substance::isEthylBoiling(){
    if (this -> Temperature >= 172){
        return true;
    }else{
        return false;
    }
}

bool Substance::isOxygenFreezing(){
    if (this -> Temperature <= -362){
        return true;
    }else{
        return false;
    }
}

bool Substance::isOxygenBoiling(){
    if (this -> Temperature >= 306){
        return true;
    }else{
        return false;
    }
}

bool Substance::isWaterFreezing(){
    if (this -> Temperature <= 32){
        return true;
    }else{
        return false;
    }
}


bool Substance::isWaterBoiling(){
    if (this -> Temperature <= 212){
        return true;
    }else{
        return false;
    }
}
