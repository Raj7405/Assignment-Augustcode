//Inheritance
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string modelName;
    int year;

    Car(string model, int year) {
        this->modelName = model; 
        this->year = year;
    }

    void displayDetails() {
        cout << "Model: " << modelName << endl;
        cout << "Year: " << year << endl;
    }
};

class SportsCar : public Car {
public:
    int topSpeed;

    SportsCar(string model, int year, int topSpeed) : Car(model, year) {
        this->topSpeed = topSpeed;
    }

    void displayDetails() {
        Car::displayDetails();
        cout << "Top Speed: " << topSpeed << " kph " << endl;
    }
};

int main() {
    SportsCar mySportsCar("Koenigsegg Agera RS", 2015, 447); 
    mySportsCar.displayDetails(); 
    return 0;
}
