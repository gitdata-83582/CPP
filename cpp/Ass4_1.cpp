#include<iostream>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    int *ptr;

public:
    Stack(int size = 5)
    {
        this->size = size;
        top = -1;
        ptr = new int[size];
    }

    void push(int element)
    {
        if (!isFull())
        {
           top++;
           ptr[top]=element;
        }
        else
            cout << "Stack Overflow" << endl;
    }
    void pop()
    {
        if (!isEmpty())
        {
            ptr[top]=0;
            top--;
        }
        else
            cout << "Stack underflow" << endl;
    }
    int peek()
    {
        return ptr[top];
    }
    void print()
    {
       
    }
    bool isFull()
    {
        return top == (size - 1);
    }
    bool isEmpty()
    {
        return top == -1;
    }
    ~Stack()
    {
        delete[] ptr;
        ptr = NULL;
    }
};

int main()
{
    Stack s1;
    int choice,element;

    do
    {
        cout<<endl<<"Welcome..."<<endl;
        cout<<"0 for exit"<<endl;
        cout<<"1 for push "<<endl;
        cout<<"2 for pop"<<endl;
        cout<<"3 for peek"<<endl;
        cout<<"4 cheak stack is full"<<endl;      
        cout<<"5 cheak stack is empty"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        
        switch(choice)
        {
            case 0:
            cout<<"\"thank you ...!\""<<endl;
            break;

            case 1:
            cout<<"enter your element"<<endl;
            cin>>element;
            s1.push(element);
            break;

            case 2:
            cout<<"element are : "<<s1.peek()<<endl;
            s1.pop();
            cout<<"element are poped.."<<endl;
            break;

            case 3:           
            cout<<"element are: "<< s1.peek()<<endl;
            break;

            case 4:
            if(s1.isFull())
            cout<<"stack is full"<<endl;
            else
            cout<<"stack is not full "<<endl;
            break;

            case 5:
            if(s1.isEmpty())
            cout<<"stack is empty"<<endl;
            else
            cout<<"stack is not empty "<<endl;
            break;

            default:
            cout<<"invalid choice"<<endl;
        }        
    }while(choice!=0);
}