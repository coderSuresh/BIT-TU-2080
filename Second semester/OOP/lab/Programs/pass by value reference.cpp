#include <iostream>
using namespace std;

void passByValue(int a) {
    a = a * 2;
    cout << "Inside passByValue function: " << a << endl;
}

void passByReference(int &a) {
    a = a * 2;
    cout << "Inside passByReference function: " << a << endl;
}

int main() {
    int x = 5;
    cout << "Before passByValue function: " << x << endl;
    passByValue(x);
    cout << "After passByValue function: " << x << endl;

    cout << "Before passByReference function: " << x << endl;
    passByReference(x);
    cout << "After passByReference function: " << x << endl;

    return 0;
}

