#include <iostream>
using namespace std;

class RetailItem{
    private:
        string description;
        int unitsOnHand;
        double price;
    public:
        RetailItem(string description, int unitsOnHand, double price){
            this->description = description;
            this->unitsOnHand = unitsOnHand;
            this->price = price;
        }
        string getDescription(){ return this->description; }
        void setDescription(string description){ this->description = description; }
        int getUnitsOnHand(){ return this->unitsOnHand; }
        void setUnitsOnHand(int unitsOnHand){ this->unitsOnHand = unitsOnHand; }
        double getPrice(){ return this->price; }
        void setPrice(double price){ this->price = price; }
        void display(){
            cout << "Description: " << description << "\nUnit on hand: " << unitsOnHand << "\nPrice: " << price << "\n";
        }
};

int main(int argc, char**){
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
    item1.display();
    item2.display();
    item3.display();
    return 0;
}