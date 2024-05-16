#include<iostream>
using namespace std;

class A
{
    public:
    void display_A()
    {
        cout<<"this is main class A "<<endl;

    }
};

class B: virtual public  A
{
    public:
    void display_b()
    {
        cout<<"this is main class b"<<endl;
    }
};

class C : virtual public A
{
    public:
    void display_C()
    {
        cout<<"this is class c"<<endl;
    }
};

class D: public B,public C
{
    public:
    void display_D()
    {
        cout<<"this is class D"<<endl;
    }

};


int main()
{
    D obj;

    obj.display_A();
    obj.display_b();
    obj.display_C();
    obj.display_D();

    return 0;
}

