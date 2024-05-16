#include <iostream>
using namespace std;

class A
{
public:
    void display_A()
    {
        cout << "this is class A"<<endl;
    }
};

class B :  virtual public A
{
public:
    void display_B()
    {
        cout << "this is class B"<<endl;
    }
};

class C : virtual public A
{
    public:
    void display_C()
    {
        cout<<"this is class C"<<endl;
    }
};

class D:public B ,public C
{
    public:
    void display_D()
    {
        cout<<"this is class D"<<endl;
    }
   
};

int main ()
{
    D obj;

    obj.display_B();
    obj.display_C();
    obj.display_D();
    obj.display_A();

    return 0;




}