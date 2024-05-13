#include <iostream> //library file
using namespace std;

class children // class declaration & defination
{
public:          // access specifier
    int numbers; // atribute & variable

    void display() // function decl & definataion
    {
        cout << "enter the no. of student :";
        cin >> numbers;

        cout << numbers << endl;
    }

    void display(int n) // here we create again same function so this is called function overload
    {
        cout << n << endl;
    }
};

int main() // main function
{
    children c;   // object declaration
    c.display();  // calling
    c.display(8); // calling

    return 0;
}