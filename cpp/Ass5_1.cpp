#include<iostream>
using namespace std;

class Date
{
    private:
    int day;
    int month;
    int year;

    public:
    Date()
    {
        day=01;
        month=01;
        year=2000;    
    }

    void acceptDate()
    {
        cout<<"enter day"<<endl;
        cin>>day;
        cout<<"enter month"<<endl;
        cin>>month;
        cout<<"enter year"<<endl;
        cin>>year;
    }

    void displayDate()
    {
         cout<<endl<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

class Person
{
    private:
    string name;
    string address;
    Date birthDate;

    public:

    Person()
    {
        name="";
        address="";
    }

    void acceptPersonData()
    {
        cout<<endl<<"enter person name "<<endl;
        cin>>name;
        cout<<"enter person address"<<endl;
        cin>>address;
        cout<<"enter person birthdate"<<endl;
        birthDate.acceptDate();
    }

    void displayPersonData()
    {
        cout<<endl<<"person name is "<<name<<endl<<"person address is "<<address<<endl;
        cout<<endl<<"person birthdate : "<<endl;
        birthDate.displayDate();
    }
};

class Employee
{
    private:
    int id;
    int sal;
    string dept;
    Date doj;
    Person p1;

    public:

    Employee()
    {
        id=0;
        sal=1000;
        dept="";
    }

    void acceptEmployeeData()
    {
        cout<<endl<<"enter employee id"<<endl;
        cin>>id;
        cout<<"enter employee sal"<<endl;
        cin>>sal;
        cout<<"enter department name"<<endl;
        cin>>dept;
        cout<<"date of joining"<<endl;
        doj.acceptDate();
        p1.acceptPersonData();
    }

    void displayEmployeeData()
    {
        cout<<endl<<"employee id is "<<id<<endl<<"employee sal is "<<sal<<endl<<"employee department is "<<dept<<endl;
        cout<<"date of joining is "<<endl;
        doj.displayDate();
        cout<<"person details "<<endl;
        p1.displayPersonData();

    }

};

int main()
{
    Employee e1;
    e1.acceptEmployeeData();
    e1.displayEmployeeData();
}