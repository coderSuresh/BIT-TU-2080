// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << a+b<<endl;
}

void add(int a, int b, int c) {
    cout << a+b+c<<endl;
}
 
void add(float a, float b) {
    cout << a+b<<endl;
}

int main() {
    
    add(2,3);
    add(2,3,4);
    add(2.2, 3.8);
    
    return 0;
}
