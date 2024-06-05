#include <iostream>

// Class template
template <class T>
class MyTemplateClass {
private:
    T var; // Data member of type T

public:
    MyTemplateClass(T n) : var(n) {} // Constructor
    T getVar() { return var; } // Member function
};

int main() {
    // Create objects with different data types
    MyTemplateClass<int> intObject(7);
    MyTemplateClass<double> doubleObject(7.7);

    std::cout << "int Object = " << intObject.getVar() << std::endl;
    std::cout << "double Object = " << doubleObject.getVar() << std::endl;

    return 0;
}