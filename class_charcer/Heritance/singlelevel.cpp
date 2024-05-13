#include <iostream>
using namespace std;

class A  //parents node
{
    public:
     void display ()
     {
        cout<<"this is the super class \n";

     }
};

class B:public A  //child node
{
    public:   //access specifier
    void display2()  //function
    {
        cout<<"this is the subclass \n";

    }

};

int main()
{
    B obj; //object declaration

    obj.display();  //calling display finction with the help of child node 
    obj.display2();  //calling

    return 0;
}