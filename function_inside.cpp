 #include <iostream>
using namespace std;

class rectangle
{
public:
    int lenght; // atributes
    int breath;

    void area() // function for area
    {
        cout << "area=" << lenght * breath << endl;
    }

    void perimeter() // function for perimeter
    {
        cout << "perimeter=" << 2 * (lenght + breath);
    }

    void show() // function for input
    {

        cout << "enter lenght:\t";
        cin >> lenght;
        cout << "enter breath:\t";
        cin >> breath;
    }
};

int main()
{
    rectangle r1, r2;

    r1.show();      // function calling
    r1.area();      //................
    r1.perimeter(); //.............

    return 0;
}
