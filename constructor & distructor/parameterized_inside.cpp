#include<iostream>
#include<string.h>
using namespace std;

class workers
{   
    private:
    int salary,day,oneday_amount;
    string name;

    public:
    workers(int oneday_amount);  //declaration of parameterized constructor
    void display();               //declaration of function


};

workers::workers(int oneday_amount)   //outside defination of constructor
{
    cout<<"\nenter name of workers: ";
    cin>>name;
    cout<<"\nenter working days numbers ";
    cin>>day;

    salary=oneday_amount*day;

}

void workers::display()  //functon for output
{
    cout<<"\nworker's name: "<<name<<"\nsalary: "<<salary;
}


int main() //main function
{                             //declaration of object
    workers w1(700),w2(500);  //constructor called automatic when create object

    w1.display();
    w2.display();

    return 0;
                        

}

