#include<iostream>
using namespace std;

class Base {
	protected:
		int x, y;
	public:
		void get_data() {
			cout<<"Enter two numbers: ";
			cin>>x>>y;
		}
};

class Derived: protected Base {
	private: 
		int total;
	public:
		void display_total() {
			get_data();
			cout<<"Total = "<<x+y;
		}
};

int main() {
	Derived d;
	d.display_total();
	
	return 0;
}
