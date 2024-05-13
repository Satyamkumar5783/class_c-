#include <iostream>
using namespace std;

class test  //class declaration & defination
{   
    public:  //acess specifier 
    int a,b,c,d; //atributes
  
    public:

    test(int a, int b, int c) //parameterized constructor
    {
        this->a=a;  
        this->b=b;
        this->c=c;
    }

    int display()  //function declaration & defination
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;

        return d= a+b+c;  //return value ;

    }
     void operator -()  //oprator overloding 
     {
        a=-a;
        b=-b;
        c=-c;
     }

};


int main ()   //main function
{
    test obj(4,6,7);  // object creation & call automatically constrcter
    obj.display();    //calling function
    cout<<obj.d<<endl;

    -obj;   //here we call oparer overloadig
    obj.display();
    cout<<obj.d<<endl;

    //in this program we use + oprator in two different work 1st we use to plus oprator to add 
    //2nd we use to change the value in negative 

    

    return 0;

}
