#include <iostream>
using namespace std;

class A
{
    public:
    void display1()
    {
        cout<<"main class \n";

    }

};

class B:public A
{
    public:
    void display2()
    {
        cout<<"this is the subclass\n";

    }
};

class C:public B    
{
    public:   //visuablity mode1
    void display3()
    {
        cout<<"this is the sub class2\n";

    }
};

int main()
{
    C obj;   //object declaration

    obj.display1();  //calling super class
    obj.display2();   //calling subclass1
    obj.display3();   //calling subclass2

    return 0;
}
