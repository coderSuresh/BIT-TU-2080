#include<iostream>
using namespace std;

class Student {
	protected:
		int roll;
		string name;
	public:
		virtual void read_data() = 0;
		virtual void display() = 0;
};

class Engineering: public Student {
	protected:
		string faculty = "Engineering";
	public:
		void read_data() {
			cout<<"Enter roll number and name of a student: ";
			cin>>roll>>name;
		}
		
		void display() {
			cout<<"Roll number: "<<roll<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Faculty: "<<faculty;
		}
};

class Medicine: public Student {
	protected:
		string faculty = "Medicine";
	public:
		void read_data() {
			cout<<"Enter roll number and name of a student: ";
			cin>>roll>>name;
		}
		
		void display() {
			cout<<"Roll number: "<<roll<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Faculty: "<<faculty;
		}
};

class Science: public Student {
	protected:
		string faculty = "Science";
	public:
		void read_data() {
			cout<<"Enter roll number and name of a student: ";
			cin>>roll>>name;
		}
		
		void display() {
			cout<<"Roll number: "<<roll<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Faculty: "<<faculty;
		}
};

int main() {
	
	Student *sptr[3];
	Engineering e;
	Science s;
	Medicine m;
	
	sptr[0] = &e;
	sptr[1] = &s;
	sptr[2] = &m;
	
	cout<<"Enter information of engineering student: \n";
	sptr[0]->read_data();
		
	cout<<"Enter information of science student: \n";
	sptr[1]->read_data();	
	
	cout<<"Enter information of medicine student: \n";
	sptr[2]->read_data();	
	
	cout<<"\nInformation of engineering student: \n";
	sptr[0]->display();
	
	cout<<"\nInformation of science student: \n";
	sptr[1]->display();
	
	cout<<"\nInformation of medicine student: \n";
	sptr[2]->display();
	
	return 0;
}
