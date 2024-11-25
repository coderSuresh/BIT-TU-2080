#include<iostream>
using namespace std;

class Lecture {
	protected:
		int id;
		string name;
	public:
		void read_data() {
			cout<<"Enter ID and name of a lecture: ";
			cin>>id>>name;
		}
		
		void print_data() {
			cout<<"ID: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
		}
};

class PartTime: public Lecture {
	protected:
		float payperhr;
	public:
		void read_data() {
			Lecture::read_data();
			cout<<"Enter pay per hour rate: ";
			cin>>payperhr;
		}
		void print_data() {
			Lecture::print_data();
			cout<<"Pay per hour rate: "<<payperhr<<endl;
		}
};

class FullTime: public Lecture {
	private:
		float pay_per_month;
	public:
		void read_data() {
			Lecture::read_data();
			cout<<"Enter pay per month rate: ";
			cin>>pay_per_month;
		}
		void print_data() {
			Lecture::print_data();
			cout<<"Pay per month rate: "<<pay_per_month<<endl;
		}
};

int main() {
	PartTime p;
	FullTime f;
	
	cout<<"Enter part time teacher's information"<<endl;
	p.read_data();
	
	cout<<endl<<"Part time teacher's information: "<<endl;
	p.print_data();
	
	cout<<endl<<"Enter full time teacher's information"<<endl;
	f.read_data();
	
	cout<<endl<<"Full time teacher's information: "<<endl;
	f.print_data();
	
	return 0;
}
