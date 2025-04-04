#include<iostream>
#include<fstream>
using namespace std;

class Emp {
	private:
		int eno;
		char name[50];
	public:
		void get_data() {
			cout<<"Enter emp number: ";
			cin>>eno;
			cout<<"Enter name: ";
			cin>>name;
		}
		void display() {
			cout<<"\nEmp No. : "<<eno<<endl;
			cout<<"Name: "<<name<<endl;
		}
};

int main() {
	Emp e;
	
	e.get_data();
	
	ofstream of("emp.dat");
	of.write((char*)&e, sizeof(e));
	cout<<"File written successfully"<<endl;
	of.close();
	
	ifstream ifs("emp.dat");
	ifs.read((char*)&e, sizeof(e));
	e.display();
	ifs.close();
	
	return 0;
}
