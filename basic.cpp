#include <iostream>
using namespace std;

class student // class name
{
public:          // Acess specifier
    int roll_No; // atributes
    string name;
};

int main()
{
    student s1, s2; //object  declaration

    cout << "Enter Name: \n";
    cin >> s1.name;              //for 1st student take input
    cout<<"Enter roll No :\n";
    cin>>s1.roll_No;

    cout<<"Enter name :\n";
    cin>>s2.name;                //for 2nd student take input 
    cout<<"Enter Roll No :\n";
    cin>>s2.roll_No;




    cout<<endl<<s1.name<<endl<<s1.roll_No<<endl<<s2.name<<endl<<s2.roll_No;   // output

    return 0;


}