#include<iostream>
#include<cstring>
using namespace std;

class Str {
	char *str;
	public:
		Str(char *arr) {
			str = arr;
		}
		
		void operator + (char * str1) {
			strcat(str, str1);
		}
		
		void print() {
			cout<<"String = "<<str;
		}
};

int main() {
	
	char fname[] = "Suresh";
	char lname[] = " Dahal";
	
	Str s(fname);
	s+lname;
	
	s.print();
	
	return 0;
}
