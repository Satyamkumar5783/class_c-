#include<iostream>
using namespace std;

class A
{
    public:

    void display1()
    {
        cout<<"this is the super class\n";
    }
};

class B:public A
{
    public:
    void display2()
    {
        cout<<"this is sub claas1\n";
    }
};

class C:public A
{
    public:
    void display3()
    {
        cout<<"this is the sub class2\n";

    }
};

class D:public A
{
    public:
    void display4()
    {
        cout<<"this is the subclass3\n";
    }
};



int main()
{

B o;
o.display1();
o.display2();

C c1;

c1.display1();
c1.display3();


D d1;
d1.display1();
d1.display4();

return 0;
    
}