#include<iostream>
using namespace std;

inline float calculate_area(int r) {
	return 3.1415 * r * r;
}

int main() {
	
	int r;
	cout<<"Enter radius of circle: ";
	cin>>r;
	
	cout << "The area of circle is: "<<calculate_area(r);
	
	return 0;
}
