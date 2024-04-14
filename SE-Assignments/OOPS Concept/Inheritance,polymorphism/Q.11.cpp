/*Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area*/

#include<iostream>

using namespace std;

// Define a class named calculate
class calculate {
public:
    // Function to calculate the area of a circle
    double calculateArea(double radius) {
        return 3.14 * radius * radius;
    }
    
    // Function to calculate the area of a rectangle
    double calculateArea(double length, double breadth) {
        return length * breadth;
    } 
    
    // Function to calculate the area of a triangle
    float calculateArea(float base, float height) {
        return 0.5 * base * height;
    } 
};

int main() {
    // Declare variables to store user input
    double radius;
    double length;
    double breadth;
    float base;
    float height;
    
    // Prompt the user to enter dimensions for rectangle and triangle
    cout << "Enter the length of Rectangle: ";
    cin >> length;
    
    cout << "Enter the breadth of Rectangle: ";
    cin >> breadth;
    
    cout << "Enter the base of Triangle: ";
    cin >> base;
    
    cout << "Enter the height of Triangle: ";
    cin >> height;
    
    // Prompt the user to enter the radius for the circle
    cout << "Enter the radius of circle: ";
    cin >> radius;
    
    // Create an object of the calculate class
    calculate obj;
    
    // Calculate and display the area of the rectangle, triangle, and circle
    cout << "Area of Rectangle is: " << obj.calculateArea(length, breadth) << endl;
    cout << "Area of Triangle is: " << obj.calculateArea(base, height) << endl;
    cout << "Area of circle is: " << obj.calculateArea(radius) << endl;
    
    return 0;
}

