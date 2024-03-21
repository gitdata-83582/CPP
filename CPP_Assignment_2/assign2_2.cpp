#include<iostream>
using namespace std;
class ToolBooth{
    unsigned int carCount;
    double totalAmount;

    public:
      ToolBooth(){
        carCount = 0;
        totalAmount = 0;
      }
      ToolBooth(int a,int b){
        carCount=a;
        totalAmount = b;
    }
      void payingCar(){
        carCount = carCount +1;
        totalAmount = totalAmount + 0.50;
        }
      void nonPayingCar(){
        carCount = carCount + 1;
        
      }  
      void printOnConsole(){
        cout<<"Car Count = "<<carCount<<endl;
        cout<<"Total Amount Collected = "<<totalAmount<<endl;

      }

    


};

int main(){
    /*
    ToolBooth T1;
    T1.printOnConsole();
    //object.functionName() => explicit calling
    T1.payingCar();
    T1.printOnConsole();
    T1.nonPayingCar();
    T1.printOnConsole();
    
    */

    
    
    ToolBooth T1(5,10);
    int choice;

    do{

        cout<<"0. Exit 1. Pay the Toll 2.Don't Pay Toll 3. Display Details"<<endl;  
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;

        switch(choice){
            case 0:
               cout<<"Thank You For Visiting"<<endl;
               break;
            case 1:
               T1.payingCar();
               T1.printOnConsole();
               break;
            case 2:
               T1.nonPayingCar();
               T1.printOnConsole();
               break;
            case 3:
                T1.printOnConsole();
                break;
            default:
                cout<<"Invalid Option"<<endl;
                break;       


               
        }






    }while(choice != 0);


    return 0;
}

int main2(){


    int choice;
    int a=10,b=20;
    do{
        cout<<"0 :exit 1:add 2:sub "<<endl;
        cout<<"Enter youre choice"<<endl;
        cin>>choice;
        switch(choice){
            case 0:
               cout<<"Exiting the Program "<<endl;
               break;
            case 1:
               cout<<"Addition = "<<a+b<<endl;
               break;   
            case 2:
                cout<<"Subtraction = "<<b-a<<endl;
                break;
            default :
                cout<<"Invalid Option"<<endl;
                break;    
        }
    }while(choice != 0);
    return 0;
}