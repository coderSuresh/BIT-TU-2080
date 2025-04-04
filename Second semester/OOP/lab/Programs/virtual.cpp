#include<iostream>
using namespace std;

class A {
    public:
        virtual void show_result() {
        	cout<<"show result from base class"<<endl;
		}
};

class B: public A {
    int x,y;
    public:
        void get_data(int a, int b) {
            x = a;
            y = b;
        }
        
        void show_result() {
            cout<<"Result = "<<x+y<<endl;
        }
};

int main() {
   A *a;
   B b;
   a = &b;
   
   b.get_data(10, 10);
   a->show_result();
    
    
	return 0;
}
