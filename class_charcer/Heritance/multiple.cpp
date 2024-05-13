#include<iostream>
using namespace std;

class A
{
    public:

    void display()
    {
        cout<<"this is the super class1\n";

    }
};

class B
{
    public:
    void display1()
    {
        cout<<"this is super class2\n";

    }
};

class C
{
    public:
    void display3()
    {
        cout<<"this is the super class3\n";
    }
};

class D:public A,public B,public C
{
    public:
    void display4()
    {
        cout<<"this is the derived class\n";
    }
};

int main()
{
  D obj;

  obj.display();
  obj.display1();
  obj.display3();
  obj.display4();

  return 0;
}


