#include<iostream>
using namespace std;

void reverse_string(char str[]) {
	int len = 0;
	
	while(str[len] != '\0') {
		len++;
	}
	
	char rev_str[len];
	
	for(int i=0; i<len; i++) {
		rev_str[i] = str[len - i - 1];
	}
	
	cout<<"Reversed string is: " << rev_str;
}

int main() {
	char str[30];
	
	cout<<"Enter a string: ";
	cin>>str;
	
	reverse_string(str);
	
	return 0;
}
