#include <iostream>

using namespace std;

// Structure to represent a date
struct DateStruct {
    int day;
    int month;
    int year;

    // Function to initialize date
    void initDate() {
        day = 0;
        month = 0;
        year = 0;
    }

    // Function to print date on console
    void printDateOnConsole() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    // Function to accept date from console
    void acceptDateFromConsole() {
        cout << "Enter day, month, and year (in format dd mm yyyy): ";
        cin >> day >> month >> year;
    }

    // Function to check if the year is a leap year
    bool isLeapYear() {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }
};

int main() {
    DateStruct dateStruct;
    int choice;

    dateStruct.initDate();

    do {
        cout << "\nMenu:\n";
        cout << "1. Initialize Date\n";
        cout << "2. Print Date\n";
        cout << "3. Accept Date\n";
        cout << "4. Check Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                dateStruct.initDate();
                cout << "Date initialized.\n";
                break;
            case 2:
                if (dateStruct.day == 0 || dateStruct.month == 0 || dateStruct.year == 0) {
                    cout << "Date not initialized. Please initialize date first.\n";
                } else {
                    dateStruct.printDateOnConsole();
                }
                break;
            case 3:
                dateStruct.acceptDateFromConsole();
                break;
            case 4:
                if (dateStruct.isLeapYear()) {
                    cout << dateStruct.year << " is a leap year." << endl;
                } else {
                    cout << dateStruct.year << " is not a leap year." << endl;
                }
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}
