#include <iostream>
#include <string>
using namespace std;

class Car{
public:
    string modelName;
    int year;

    Car(string model, int year){
        this->modelName = model;
        this->year = year;
    }
    void displayDetails(){
        cout << "Model: " << modelName << endl;
        cout << "Year: " << year << endl;
    }
};
int main(){
    Car myCar("Toyota Camry", 2022);
    myCar.displayDetails();
    return 0;
}
