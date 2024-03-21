#include <iostream>

using namespace std;

// Class to represent a box
class Box 
{
private:
    double length;
    double width;
    double height;

public:
    // Parameterless constructor
    Box() 
    {
        length = 1.0;
        width = 1.0;
        height = 1.0;
    }

    // Parameterized constructor with three parameters
    Box(double l, double w, double h) 
    {
        length = l;
        width = w;
        height = h;
    }

    // Single parameterized constructor
    Box(double side) 
    {
        length = width = height = side;
    }

    // Function to calculate volume
    double calculateVolume() 
    {
        return length * width * height;
    }
};

int main() 
{
    int choice;
    double length, width, height;

    do 
    {
        cout << "\nMenu:\n";
        cout << "1. Calculate Volume with default values\n";
        cout << "2. Calculate Volume with length, breadth, and height with same value\n";
        cout << "3. Calculate Volume with different length, breadth, and height values\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
            {
                Box box1;
                cout << "Volume of the box with default values: " << box1.calculateVolume() << endl;
                break;
            }
            case 2: 
            {
                cout << "Enter the value for length, width, and height: ";
                cin >> length;
                Box box2(length);
                cout << "Volume of the box with same length, width, and height: " << box2.calculateVolume() << endl;
                break;
            }
            case 3: 
            {
                cout << "Enter the values for length, width, and height: ";
                cin >> length >> width >> height;
                Box box3(length, width, height);
                cout << "Volume of the box with different length, width, and height: " << box3.calculateVolume() << endl;
                break;
            }
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid choice." << endl;
                break;
        }
    } 
    while (choice != 4);

    return 0;
}
