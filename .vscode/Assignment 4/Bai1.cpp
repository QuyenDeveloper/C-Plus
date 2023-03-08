#include <iostream>
using namespace std;

class Employee{
    string Name;
    string IdNumber;
    string Department;
    string Position;
    public:
    Employee(){
        this->Name = "";
        this->IdNumber = "0";
        this->Department = "";
        this->Position = "";
    }
    Employee(string Name, string IdNumber, string Department, string Position){
        this->Name = Name;
        this->IdNumber = IdNumber;
        this->Department = Department;
        this->Position = Position;
    }
    Employee(string Name, string IdNumber){
        this->Name = Name;
        this->IdNumber = IdNumber;
        this->Department = "";
        this->Position = "";
    }
    string getName() { return this->Name; }
    void setName(string name) { this->Name = name; }
    string getIdNumber() { return this->IdNumber; }
    void setIdNumber(string idNumber) { this->IdNumber = idNumber;}
    string getDepartment() { return this->Department; }
    void setDepartment(string department) { this->Department = department;}
    string getPosition() { return this->Position; }
    void setPosition(string position) { this->Position = position;}
    void display() {
        cout << "Employee: " << this->Name << " - " << this->IdNumber << " - " << this->Department << " - " << this->Position << endl;
    }
};

void holder();

int main(int argc, char**){
    holder();
    return 0;
}

void holder(){
    Employee employee1("Susan Meyers", "47899", "Accounting", "Vice President");
    Employee employee2("Mark Jones", "39119", "IT", "Programmer");
    Employee employee3("Joy Rogers", "81774", "Manufacturing", "Engineer");
    employee1.display();
    employee2.display();
    employee3.display();
}