#include <iostream>  //library function
using namespace std;  

class first  //inclusive class 
{
public:  //Access specifier
    int a=9; //Atributes

public:   
    class second  //Nested class
    {
    public:
        int b = 7;

        void display()  //function declaration & body
        {
            cout << "\nb=" << b;
        }
    };
};

int main() // main function
{
    //object cretion for nested class or second class
    {
        first::second s1, s2; //declaration of object using scope resoulation(::) oprator

        cout << "b=" << s1.b;

        s1.display();
    }

    //object cretaion for inclusive class

    {

        first s1, s2;
        cout << "\na=" << s1.a;
    }

    return 0;
}