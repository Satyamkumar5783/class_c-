#include<iostream>
using namespace std;

class student
{
    int roll_no,n=600,fee;
    char name [50];


    public:
    student(int month);        //declaration of constructor
    void display();

};


student::student(int month=1)  //parameterized constructor 
{
    cout<<"\nenter roll no. of student :";
    cin>>roll_no;
    cout<<"\nenter the name of student: ";
    cin>>name;

    fee=month*n;
}

void student::display()  // function for display
{
    cout<<"\nname "<<name<<"\nroll no "<<roll_no<<"\n your total fee "<<fee;
}

int main()    //main function
{
    //object declaration 
    //student s1,s2;        //here the constructor call itself when we create object

    //we create object with parameters
    student s1(4),s2(6);


    s1.display();
    s2.display();         //function calling 

    return 0;

}

