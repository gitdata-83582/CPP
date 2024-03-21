#include <iostream>

class Cylinder {
private:
    double radius;
    double height;
    static const double PI; // Static constant for PI value

public:
    // Constructors
    Cylinder() : radius(0.0), height(0.0) 
    {

    }
    Cylinder(double radius, double height) : radius(radius), height(height) 
    {

    }

    // Getter and setter for radius
    double getRadius() const { return radius; }
    void setRadius(double radius) { this->radius = radius; }

    // Getter and setter for height
    double getHeight() const { return height; }
    void setHeight(double height) { this->height = height; }

    // Function to calculate volume
    double getVolume() const 
    {
        return PI * radius * radius * height;
    }

    // Function to print volume
    void printVolume() const 
    {
        std::cout << "Volume of the cylinder: " << getVolume() << std::endl;
    }
};

// Defining static constant PI
const double Cylinder::PI = 3.14;

int main() 
{
    Cylinder cylinder(5.0, 10.0); // Example cylinder with radius 5 and height 10

    cylinder.printVolume();

    return 0;
}
