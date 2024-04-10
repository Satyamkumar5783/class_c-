
/*#include<iostream>
using namespace std;

class student
{
    public: //Acess specifier
    int roll_No;
    string Name;

    int show()
    {
        cout<<roll_No<<endl<<Name<<endl;
    }

 
};


int main()
{
    student s1,s2;
    cout<<"enter ur name No :\t";
    cin>>s1.Name;
    cout<<"enter rollno:\t";
    cin>>s1.roll_No;

    cout<<"enter ur name:\t";
    cin>>s2.Name;
    cout<<"enter rollno:\t";
    cin>>s2.roll_No;

   s1.show();

   return 0;

}
*/


#include <iostream>
using namespace std;

class student
{
public: // Access specifier
    int roll_No;
    string Name;

    /*void show() // Corrected function definition
    {
        cout << "Roll No: " << roll_No << endl;
        cout << "Name: " << Name << endl;
    };
};

int main()
{
    student s1, s2;
    cout << "Enter your roll No: ";
    cin >> s1.roll_No;
    cout << "Enter your name: ";
    cin >> s1.Name;

    cout << "Enter your roll No: ";
    cin >> s2.roll_No;
    cout << "Enter your name: ";
    cin >> s2.Name;

    s1.show(); // Corrected function call
    s2.show(); // Corrected function call

    return 0;
}
*/


 void input()
 {
    cout<<"Enter ur name:\t";
    cin>>Name;
    cout<<"Enter roll no:\t";
    cin>>roll_No;

 };

 void show()
 {
    cout<<Name<<endl<<roll_No<<endl;
 };
};

 int main()
 {
    student s1,s2;

    s1.input();
    s1.show();

    s2.input();
    s2.show();

    return 0;
 }


