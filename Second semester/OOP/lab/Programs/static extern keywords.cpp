#include <iostream>
using namespace std;

int externVar = 100;

void displayExtern() {
    cout << "Inside displayExtern function: externVar = " << externVar << endl;
}

void demonstrateAuto() {
    auto autoVar = 10;
    cout << "Inside demonstrateAuto function: autoVar = " << autoVar << endl;
}

void demonstrateRegister() {
    register int registerVar = 20;
    cout << "Inside demonstrateRegister function: registerVar = " << registerVar << endl;
}

void demonstrateStatic() {
    static int staticVar = 30;
    cout << "Inside demonstrateStatic function: staticVar = " << staticVar << endl;
    staticVar++;
}

int main() {
    cout << "Inside main function: externVar = " << externVar << endl;
    demonstrateAuto();
    demonstrateRegister();
    demonstrateStatic();
    demonstrateStatic();
    externVar = 200;
    displayExtern();
    return 0;
}

