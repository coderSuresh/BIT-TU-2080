#include<iostream>
using namespace std;

void sort(int arr[]) {
	
	for(int i=0; i<5; i++) {
		for(int j=i; j<5; j++) {
			if(arr[i] > arr[j]) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	cout<<"Sorted array: "<<endl;
	
	for(int i=0; i<5; i++) {
		cout<<arr[i]<<endl;
	}
}

void sort(float arr[]) {
	
	for(int i=0; i<5; i++) {
		for(int j=i; j<5; j++) {
			if(arr[i] > arr[j]) {
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	cout<<"Sorted array: "<<endl;
	
	for(int i=0; i<5; i++) {
		cout<<arr[i]<<endl;
	}
}

int main() {
	int arr[5];
	float f_arr[5];
	
	cout<<"Enter integer elements: ";
	
	for(int i=0; i<5; i++) {
		cin>>arr[i];
	}
	
	cout<<"Enter float elements: ";
	
	for(int i=0; i<5; i++) {
		cin>>f_arr[i];
	}
	
	sort(arr);
	sort(f_arr);
	
	return 0;
}
