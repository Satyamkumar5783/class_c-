#include<iostream>
using namespace std;

class workers
{   
    private:
    int salary,onedayamount,day;
    string name;


    public:      
    workers(int onedayamount)     //constructor declaration and body 
    {
        cout<<"\nEnter name of workers: ";
        cin>>name;
        cout<<"\n working days: ";
        cin>>day;
        salary= day * onedayamount;
    }

    void display()
    {
        cout<<"\nthe workers salary is "<<salary;
    }

};


int main()
{
    workers w1(600),w2(700);   //object declaration 

    w1.display();
    w2.display();

    return 0;
}
