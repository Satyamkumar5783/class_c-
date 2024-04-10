#include <iostream>
using namespace std;

class student // this class of student
{
    public:
    int roll_no; // atributes
    string name;

public:
    student() // default constructor
    {
        cout << "enter the  roll no: ";
        cin >> roll_no;

        cout << "enter the name: ";
        cin >> name;
        
    }

    void input() // function for take input
    {
         cout << "the roll is " << roll_no << "\nname is " << name;
        
    }
};
int main() // main function
{
    student s1,s2,s3; // this object declaration
    // here the constructor call itself then we declare object

    s1.input();

    return 0;
};
