#include <iostream>
using namespace std;

int cal(int stTime,int endTime,int moneyI){
    int moneyO;
    int times = stTime - endTime;
    if(times <= 3){
        moneyO = times * moneyI;
    }else{
        moneyO = 3 * moneyI;
        int rmtimes = times-3;
        moneyO += rmtimes * moneyI;
    }
    return moneyO;
}

int main(){
    int stTime,endTime,moneyI,moneyO;
    cout << "Thoi gian bat dau: ";
    cin >> stTime;
    cout << "Thoi gian ket thuc: ";
    cin >> endTime;
    cout << "Dong gia: ";
    cin >> moneyI;
    moneyO = cal(stTime,endTime,moneyI);
    cout << "Your number is: " << moneyO;

    return 0;
}
