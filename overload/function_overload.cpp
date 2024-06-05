#include <iostream> 
using namespace std;

class children 
{
public:          
    int numbers;

    void display() 
    {
        cout << "enter the no. of student :";
        cin >> numbers;

        cout << numbers << endl;
    }

    void display(int n) 
    {
        cout << n << endl;
    }
};

int main() // main function
{
    children c;   // object declaration
    c.display();  // calling
    c.display(1323428); // calling
    cout<<"\nSatyam Kumar\nRoll No-1323431\n";

    return 0;
}