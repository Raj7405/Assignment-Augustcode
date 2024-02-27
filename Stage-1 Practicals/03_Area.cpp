//Polymorphism

#include <iostream>
#include <cmath>

using namespace std;

//area of rectange
double calculateArea(double length, double width) {
    return length * width;
}

//area of circle
double calculateArea(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double lenght, width, radius;
    cout << "Enter the length of rectange: ";
    cin >> lenght;

    cout << "Enter the width of rectange: ";
    cin >> width;

    double rectangleArea = calculateArea(lenght, width); 
    cout << "Area of the rectangle: " << rectangleArea << endl;
    
    //cricle
    cout << "Enter the radius of rectange:";
    cin >> radius;

    double circleArea = calculateArea(3.0); 
    cout << "Area of the circle: " << circleArea << endl;

    return 0;
}
