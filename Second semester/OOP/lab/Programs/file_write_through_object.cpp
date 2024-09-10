#include <iostream>
#include <fstream>
using namespace std;

class Student {
	int rollNo;
	string name;
	float marks;
	
	public:
		void getData() {
			cout << "Enter Roll No, name and mark:";
			cin>>rollNo>>name>>marks;
		}
	
	void showData() {
		cout << "Roll No: " << rollNo << endl;
		cout << "Name: " << name << endl;
		cout << "Marks: " << marks << endl;
	}
	
	void writeToFile() {
		ofstream outFile("student.txt");
		if (!outFile) {
			cout << "File could not be opened." << endl;
		return;
	}
	outFile << rollNo << endl;
	outFile << name << endl;
	outFile << marks << endl;
	outFile.close();
	}
	
	void readFromFile() {
		ifstream inFile("student.txt");
		if (!inFile) {
			cout << "File could not be opened." << endl;
		return;
	}
	
	inFile >> rollNo;
	inFile >> name;
	inFile >> marks;
	
	inFile.close();
	}
};

int main() {
Student student;

student.getData();
student.writeToFile();

student.readFromFile();
student.showData();

return 0;
}
