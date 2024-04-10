#include<iostream>   
using namespace std;

class student    //class
{   
    public:
    string name;  //atributes
    int roll_no;  //atributes

    public:
    student();   //constructor function declaration
    void display();

};

student::student() //outside defination of constructor
{
    cout<<"\nenter name of students: ";
    cin>>name;
    cout<<"enter roll no of student: ";
    cin>>roll_no;
}

 void student::display()   //function for output
{
    cout<<"\nname " <<name<<"\nroll no "<<roll_no<<endl;
}


int main()
{                    //object declaration
    student s1,s2;   //constructor get called automatically when we create object

    s1.display();    //funtction calling
    s2.display();

    return 0;
}                   

