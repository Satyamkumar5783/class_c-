#include <iostream>
#include <string.h>
using namespace std;

class workers
{
private:
    int salary, day, oneday_amount;
    string name;

public:
    workers(int oneday_amount);
    void display();
};

workers::workers(int oneday_amount)
{
    cout << "\nenter name of workers: ";
    cin >> name;
    cout << "\nenter working days numbers ";
    cin >> day;

    salary = oneday_amount * day;
}

void workers::display()
{
    cout << "\nworker's name: " << name << "\nsalary: " << salary;
}

int main()
{
    workers w1(700);

    w1.display();
    cout << "\nSatyam Kumar\nRoll No-1323431\n";

    return 0;
}
