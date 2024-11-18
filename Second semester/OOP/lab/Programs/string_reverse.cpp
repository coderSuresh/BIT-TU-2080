#include<iostream>
using namespace std;

char * reverse(char *arr, int len) {
	char *rev = new char[len];
	
	for(int i=0; i<len; i++) {
		rev[i] = arr[len - i - 1];
	}
	
	return rev;
}

int main() {
	
	char name[] = "Suresh";
	
	char *rev = reverse(name, 6);
	
	cout<<rev;
	
	return 0;
}
