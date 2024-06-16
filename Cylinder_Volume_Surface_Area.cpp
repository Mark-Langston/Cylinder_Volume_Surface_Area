// CSC252 Programming in C++
// Mark Langston   6/15/2024

#include <iostream>

// PI variable as a const using 3.14, I think numbers library contains PI also
const double PI = 3.14;

class Cylinder {
private:
    double radius;
    double height;

public:
    // Constructor
    Cylinder(double r, double h) : radius(r), height(h) {}

    // Accessors for volume and surface area
    double volume() const {
        return PI * radius * radius * height;
    }
    double surfaceArea() const {
        return 2 * PI * radius * height + 2 * PI * radius * radius;
    }
};

int main() {
    // Program intro
    std::cout << "Cylinder Volume and Surface Area Calculator\n" << "\n";

    // Prompts user for the parameters of the cylinder
    double radius, height;
    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;
    std::cout << "\n";

    Cylinder can(radius, height);

    // Final output of the program
    std::cout << "The volume of the cylinder is: " << can.volume() << "\n";
    std::cout << "The surface area of the cylinder is: " << can.surfaceArea() << "\n";

    return 0;
}