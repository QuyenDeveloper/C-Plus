#include <iostream>
using namespace std;

class Inventory{
    private:
        int itemNumber;
        int quantity;
        double cost;
        double totalCost;
    public:
        Inventory(){
            this->itemNumber = 0;
            this->quantity = 0;
            this->cost = 0;
            this->totalCost = 0;
        }
        Inventory(int itemNumber, int quantity, double cost){
            this->itemNumber = itemNumber;
            this->quantity = quantity;
            this->cost = cost;
            setTotalCost();
        }
        void setTotalCost(){
            this->totalCost = this->cost * this->quantity;
        }
        void setItemNumber(int itemNumber){
            this->itemNumber = itemNumber;
        }
        void setQuantity(int quantity){
            this->quantity = quantity;
        }
        void setCost(double cost){
            this->cost = cost;
        }
        int getItemNumber() { return this->itemNumber; }
        int getQuantity() { return this->quantity; }
        double getCost() { return this->cost; }
        double getTotalCost() { return this->totalCost; }
        void display(){
            cout << "ItemNumber: " << this->itemNumber << " Quantity: " << this->quantity << " Cost: " << this->cost << " TotalCost: " << this->totalCost << endl;
        }
};

int main(int argc, char**){
    int itemNumber, quantity;
    double cost, totalCost;
    cout << "Item number: ";
    cin >> itemNumber;
    while (itemNumber <= 0)
    {
        cout << "Item number can't be negative, please enter again: ";
        cin >> itemNumber;
    }

    cout << "Quantity: ";
    cin >> quantity;
    while (quantity <= 0)
    {
        cout << "Quantity can't be negative, please enter again: ";
        cin >> quantity;
    }

    cout << "Cost: ";
    cin >> cost;
    while (cost <= 0)
    {
        cout << "Cost can't be negative, please enter again: ";
        cin >> quantity;
    }
    Inventory i1(itemNumber,quantity,cost);
    i1.display();
    return 0;
}