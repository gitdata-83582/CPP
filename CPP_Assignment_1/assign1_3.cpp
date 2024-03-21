#include <iostream>
#include <string>

using namespace std;

// Class to represent a student
class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Function to initialize student
    void initStudent() {
        rollNo = 0;
        name = "";
        marks = 0.0;
    }

    // Function to print student details on console
    void printStudentOnConsole() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    // Function to accept student details from console
    void acceptStudentFromConsole() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore(); // Ignore newline character in input buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

int main() {
    Student student;
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Initialize Student\n";
        cout << "2. Print Student Details\n";
        cout << "3. Accept Student Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                student.initStudent();
                cout << "Student initialized.\n";
                break;
            case 2:
                student.printStudentOnConsole();
                break;
            case 3:
                student.acceptStudentFromConsole();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid choice." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
