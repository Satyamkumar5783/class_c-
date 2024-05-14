#include <iostream> //librarry file
#include <cstring>
using namespace std;

class student // class
{
public: // access specifier
    void display()  //function declaration & defination
    {

        cout << "satyam" << endl;  //we made this function that give output "satyam"
    }
};

class sister : public student  //crete new function & inherit with super class 
{
public:
    void display()  //here we made again display function who exist in the program allredy so when we call it.
                    //he overwrite the previous function ,when we call display function it is called this functon because he modified and overwrite
    {

        cout << "akash" << endl;
    }
};

int main()
{
    sister s1;   //object creation
    s1.display();  //calling

    //when we need previous function we called by made object of them class

    student r1;

    r1.display();  //here called display function of super class

    return 0;
}