#include<iostream>
using namespace std;

class Shape {
	public:
		virtual void area() = 0;
		virtual void display() = 0;
		
		virtual ~Shape() {}
};

class Rectangle: public Shape {
	private:
		int l, b, a;
	public:
		void area() {
			cout<<"Enter length and breadth of rectangle: ";
			cin>>l>>b;
			a = l*b;
		}
		
		void display() {
			cout<<"Area of rectangle = "<<a<<endl;
		}
};

class Triangle: public Shape {
	private:
		float b, h, a;
	public:
		void area() {
			cout<<"Enter base and height of triangle: ";
			cin>>b>>h;
			a = 0.5f * b * h;
		}
		
		void display() {
			cout<<"Area of triangle = "<<a<<endl;
		}
};

class Trapeziod: public Shape {
	private:
		int b1, b2, h;
		float a;
	public:
		void area() {
			cout<<"Enter base1, base2, and height of a trapeziod: ";
			cin>>b1>>b2>>h;
			a = 0.5f * (b1 + b2) * h;
		}
		
		void display() {
			cout<<"Area of trapeziod = "<<a<<endl;
		}
};

int main() {
	Rectangle r;
	Triangle t;
	Trapeziod tp;
	
	r.area();
	t.area();
	tp.area();
	
	r.display();
	t.display();
	tp.display();
	
	return 0;
}
