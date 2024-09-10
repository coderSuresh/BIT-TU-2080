#include<iostream>
#include<cstring>
using namespace std;

class Person {
	protected:
		string name, phone, address;
	public:
		void get_person_info() {
			cout<<"Enter name, phone number, and address: ";
			cin>>name>>phone>>address;
		} 
		
		void display_personal_info() {
			cout<<"Person name: "<<name<<endl;
			cout<<"Phone number: "<<phone<<endl;
			cout<<"Address: "<<address<<endl;
		}
};

class Employee: protected Person {
	protected:
		int eno;
		string ename;
	public:
		void get_emp_info() {
			cout<<"Enter employee number: ";
			cin>>eno;
			cin.ignore();
			cout<<"Enter employee name: ";
			getline(cin, ename);
		}
		
		void display_emp_info() {
			cout<<"Employee number: "<<eno<<endl;
			cout<<"Employee name: "<<ename<<endl;
		}
};

class Manager: protected Employee {
	protected:
		string designation, dept_name;
		float basic_salary;
	public:
		void get_manager_info() {
			get_person_info();
			get_emp_info();
			cin.ignore();
			cout<<"Enter designation: ";
			getline(cin, designation);
			cout<<"Enter department name: ";
			cin>>dept_name;
			cout<<"Enter basic salary: ";
			cin>>basic_salary;
		}
		
		float get_salary() {
			return basic_salary;
		}
		
		void display_manager_info() {
			display_personal_info();
			display_emp_info();
			cout<<"Designation: "<<designation<<endl;
			cout<<"Department: "<<dept_name<<endl;
			cout<<"Basic salary: "<<basic_salary;
		}
};

int main() {
	int n;
	cout<<"Enter number of managers: ";
	cin>>n;
	
	Manager m[n];
	
	cout<<"Enter manager's info: "<<endl;
	for(int i=0; i<n; i++) {
		m[i].get_manager_info();
	}
	
	int index_of_manager_having_max_salary = 0;
	for(int i=0; i<n; i++) {
		if(m[index_of_manager_having_max_salary].get_salary() < m[i].get_salary()) {
			index_of_manager_having_max_salary = i;
		}
	}
	cout<<"Manager with highest salary: "<<endl;
	m[index_of_manager_having_max_salary].display_manager_info();	
	
	return 0;
}
