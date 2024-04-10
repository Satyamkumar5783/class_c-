#include <iostream>
#include<string.h>
using namespace std;

class student 
{   
    public:
    int roll_no;
    string name;


    void input();
    void output();
};


void student:: input()
{
    cout<<"Enter the roll no of student:\t";
    cin>>roll_no;

    cout<<"enter the name of student :\t";
    cin>>name;

}
void student::output()
{
    cout<<"roll no -\t"<<roll_no<<"\nNAme-\t"<<name;
}



int main()
{
    student s1,s2;
    s1.input();
    s1.output();
    return 0;
}
