#include<iostream>
using namespace std;

class Product
{
    private:
    int id;
    string title;
    double price;

    public:
    virtual void acceptData()
    {
        cout<<"enter id"<<endl;
        cin>>id;
        cout<<"enter title"<<endl;
        cin>>title;
        cout<<"enter price"<<endl;
        cin>>price;
    }

    virtual void displayData()
    {
        cout<<"id is : "<<id<<endl<<"title is : "<<title<<endl<<"price is : "<<price<<endl;
    }

    void setPrice(double price)
    {
        this->price=price;
    }

    int getPrice()
    {
        return price;
    }


};

class Book:public Product
{
    private:
    string author;

    public:
    void acceptData()
    {
        Product::acceptData();
        cout<<"author name : "<<endl;
        cin>>author;
        setPrice(getPrice()-(getPrice()*0.10));
    }

    void dispalyData()
    {
        cout<<"author name is : "<<author<<endl;
        Product::displayData();        
    }

};

class Tape:public Product
{
    private:
    string artist;

    public:

    void acceptData()
    {
        Product::acceptData();
        cout<<"artist name : "<<endl;
        cin>>artist;
        setPrice(getPrice()-getPrice()*0.05);      
    }

    void displayData()
    {
        cout<<"artist name is : "<<artist<<endl;
        Product::displayData();

    }

};

int main()
{
    int choice;
    Product*arr[3];
    Product *s=NULL;
    int index=0;
    int total=0;

    do
    {
        
        cout<<"0 for exit "<<endl;
        cout<<"1 for book "<<endl;
        cout<<"2 for tape "<<endl;
        cout<<"3 for total"<<endl;
        cout<<"4 for display "<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0:
            cout<<"thank you..."<<endl;
            break;

            case 1:
            s=new Book();
            break;

            case 2:
            s = new Tape();
            break;

            case 3:
            for (int i = 0; i < index; i++)
            total=total+arr[i]->getPrice();
            cout<<"total price is "<<total<<endl;
            break;

            case 4:
            for (int i = 0; i < index; i++)
            arr[i]->displayData();
            break;

            default :
            cout <<"invalid choice"<<endl;       
             
        }
         if (s != NULL)
        {
            if (index < 5)
            {
                s->acceptData();
                arr[index] = s;
                index++;
                s = NULL;
            }
            else
            {
                cout << "Array is full.." << endl;
                delete s;
                s = NULL;
            } 
        }  

    }while(choice!=0);
    for (int i = 0; i < index; i++)
    delete arr[i];
    for (int i = 0; i < index; i++)
    arr[i] = NULL;

}
