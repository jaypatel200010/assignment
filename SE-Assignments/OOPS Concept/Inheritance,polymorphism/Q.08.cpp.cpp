/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/

#include<iostream>
using namespace std;

// Define a class named Mathematic
class Mathematic {
public:
    // Function A with three integer parameters
    void A(int a, int b, int c) {
        cout << "sum = " << (a + b + c) << endl;
    }

    // Function A with two double parameters
    void A(double a, double b) {
        cout << "sum = " << (a + b) << endl;
    }

    // Function A with one integer and one double parameter
    void A(int a, double b) {
        cout << "sum = " << (a + b) << endl;
    }

    // Function A with one float and one double parameter
    void A(float a, double b) {
        cout << "sum = " << (a + b) << endl;
    }
};

int main() {
    // Create an object of the Mathematic class
    Mathematic obj;

    // Call function A with three integer arguments
    obj.A(25, 30, 20);

    // Call function A with two double arguments
    obj.A(5.2, 10.2);

    // Call function A with one integer and one double argument
    obj.A(10, 10.3);

    // Call function A with one float and one double argument
    obj.A(10.2f, 10.2);

    return 0;
}

