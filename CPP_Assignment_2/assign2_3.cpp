#include <iostream>
#include <string>

using namespace std;

class Address {
private:
    string building;
    string street;
    string city;
    int pin;

public:
    // Constructors
    Address() : pin(0) {}
    Address(string building, string street, string city, int pin) : building(building), street(street), city(city), pin(pin) {}

    // Getters
    string getBuilding() const { return building; }
    string getStreet() const { return street; }
    string getCity() const { return city; }
    int getPin() const { return pin; }

    // Setters
    void setBuilding(string building) { this->building = building; }
    void setStreet(string street) { this->street = street; }
    void setCity(string city) { this->city = city; }
    void setPin(int pin) { this->pin = pin; }

    // Accept method to input address details
    void accept() {
        cout << "Enter Building: ";
        getline(cin, building);
        cout << "Enter Street: ";
        getline(cin, street);
        cout << "Enter City: ";
        getline(cin, city);
        cout << "Enter PIN: ";
        cin >> pin;
        cin.ignore(); // to clear the input buffer
    }

    // Display method to output address details
    void display() const {
        cout << "Building: " << building << endl;
        cout << "Street: " << street << endl;
        cout << "City: " << city << endl;
        cout << "PIN: " << pin << endl;
    }
};

int main() {
    // Creating an object of the Address class
    Address address1;

    // Testing setters
    address1.setBuilding("123");
    address1.setStreet("Main Street");
    address1.setCity("Springfield");
    address1.setPin(12345);

    // Displaying address details
    cout << "Address details using getters:" << endl;
    cout << "Building: " << address1.getBuilding() << endl;
    cout << "Street: " << address1.getStreet() << endl;
    cout << "City: " << address1.getCity() << endl;
    cout << "PIN: " << address1.getPin() << endl;

    // Testing accept() method
    Address address2;
    cout << "\nEnter Address details:" << endl;
    address2.accept();

    // Displaying entered address details
    cout << "\nEntered Address details:" << endl;
    address2.display();

    return 0;
}
