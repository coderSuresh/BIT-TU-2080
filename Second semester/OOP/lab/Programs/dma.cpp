#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 42;
    cout << "Value of the single integer: " << *ptr << endl;
    delete ptr;

    int size = 5;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;
    }
    
    cout << "Values in the array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}

