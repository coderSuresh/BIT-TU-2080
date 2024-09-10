#include <iostream>
#include <string>
using namespace std;

class MyClass {
private:
    int a;
    double b;
    string c;

public:
    MyClass() {
        a = 0;
        b = 0.0;
        c = "default";
        cout << "Default constructor called" << endl;
    }

    MyClass(int x) {
        a = x;
        b = 0.0;
        c = "default";
        cout << "Constructor with one parameter called, a = " << a << endl;
    }

    MyClass(int x, double y) {
        a = x;
        b = y;
        c = "default";
        cout << "Constructor with two parameters called, a = " << a << ", b = " << b << endl;
    }

    void display() const {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};

int main() {
    MyClass obj1;                
    obj1.display();

    MyClass obj2(10);            
    obj2.display();

    MyClass obj3(20, 30.5);     
    obj3.display();

    return 0;
}

