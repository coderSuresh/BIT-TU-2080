#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main() {
	char filename[50], word_to_count[50], word[50];
	
	ifstream inf;
	
	cout<<"Enter filename: ";
	cin>>filename;
	inf.open(filename);
	cout<<"Enter word: ";
	cin>>word_to_count;
	
	if(!inf) {
		cout<<"Could not open file";
		return 0;
	}
	
	int count = 0;
	
	while(inf >> word) {
		if(strcmp(word, word_to_count) == 0)
			count++;
	}
	
	inf.close();
	
	cout<<"The word "<<word_to_count<<" appears "<<count<<" times.";
	
	return 0;
}
