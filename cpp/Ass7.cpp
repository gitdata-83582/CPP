#include<iostream>
using namespace std;

class Employee
{
    private :
    int id;
    double salary;

    public:
    Employee()
    {

    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
      
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {

    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager :virtual public Manager,virtual public Salesman
{
public:
    SalesManager()
    {

    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    Employee *arr[5];
    int index=0;
    int choice;
    int m=0;
    int s=0;
    int sm=0;

    do
    {
        cout<<"0. EXIT"<<endl;
        cout<<"1 for ACCEPT EMPLOYEE"<<endl;
        cout<<"2 for Display the count of all employees with respect to designation"<<endl;  
        cout<<"3 for Display All Managers"<<endl; 
        cout<<"4 for Display All Salesman"<<endl;   
        cout<<"5 for Display All SalesManagers"<<endl;
        cout<<"enter choice : "<<endl;
        cin>>choice;
        cout<<endl;

        switch(choice)
        {
            case 0:
            cout<<"thanks for using"<<endl;
            break;

            case 1:
            char key;
            do
            {
                cout<<"enter a new key"<<endl;
                cout<<"A for accept manager "<<endl;
                cout<<"B for accept salesman "<<endl;
                cout<<"C for accept salesmanager"<<endl; 
                cout<<"E for exit"<<endl;
                cout<<"enter choice : "<<endl;
                cin>>key;
                cout<<endl;

                switch(key)
                {
                    case 'A':
                    case 'a':
                    if(index<5)
                    {
                    arr[index]=new Manager();
                    arr[index]->accept();
                    index++;
                    }
                    else
                    {
                        cout<<"Array is full"<<endl;
                    }
                    break;


                    case 'B':
                    case 'b':
                    if(index<5)
                    {
                    arr[index]=new Salesman();
                    arr[index]->accept();
                    index++;
                    }
                    else
                    {
                        cout<<"Array is full"<<endl;
                    }
                    break;


                    case 'C':
                    case 'c':
                    if(index<5)
                    {
                    arr[index]=new SalesManager();
                    arr[index]->accept();
                    index++;
                    }
                    else
                    {
                        cout<<"Array is full"<<endl;
                    }
                    break;

                    case 'E':
                    case 'e':
                    cout<<"Go for next step"<<endl;

                    default:
                    cout<<"invalid key"<<endl;                
                }
            }while(key!='E');
            break;

            case 2:
            for(int i=0;i<index;i++)
            {
                if(typeid(*arr[i])==typeid(Manager))
                m++;
                else if(typeid(*arr[i])==typeid(Salesman))
                s++;
                else if(typeid(*arr[i])==typeid(SalesManager))
                sm++;
            }
            cout<<"number of managers : "<<m<<endl;
            cout<<"number of salesman : "<<s<<endl;
            cout<<"number of salesmanager : "<<sm<<endl;
            cout<<"total number of employees : "<<m+s+sm<<endl;   
            break;

            case 3:
            {
            int count=0;
            for(int i=0;i<index;i++)
            {
                if(typeid(*arr[i])==typeid(Manager))
                {
                    arr[i]->display();
                    count++;
                }
            }
                if(count==0)
                {
                    cout<<"no manager"<<endl;
                }
            }
                break;
            
            case 4:
            {
            int count=0;
            for(int i=0;i<index;i++)
            {
                if(typeid(*arr[i])==typeid(Salesman))
                {
                    arr[i]->display();
                    count++;
                }
            }
                if(count==0)
                {
                    cout<<"no salesman"<<endl;
                }
            }
                break;

            case 5:
            {
            int count=0;
            for(int i=0;i<index;i++)
            {
                if(typeid(*arr[i])==typeid(SalesManager))
                {
                    arr[i]->display();
                    count++;
                }
            }
                if(count==0)
                {
                    cout<<"no salesmanager"<<endl;
                }
            }
                break;
            

            default:
            cout<<"invalid choice"<<endl;    
        }
    }while(choice!=0);
    for(int i=0;i<index;i++)
    delete arr[i];
}

