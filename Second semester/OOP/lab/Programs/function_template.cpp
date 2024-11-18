#include<iostream>
using namespace std;

template <class T>

T add (T a, T b) {
	T c = a+b;
	return c;
}

int main() {
	
	int res = add(2,3);
	cout<<"INT: "<<res<<endl;
	
	float fres = add(2.3, 4.7);
	cout<<"FLOAT: "<<fres<<endl;
	
	return 0;
}
