#include<iostream>
#include<fstream>
using namespace std;

int main() {
	ofstream ofs("newFile.txt");
	
	if(!ofs) {
		cout<<"Could not open file";
		return 0;
	}
	
	ofs<<"Nepal is very beautiful\nPlease visit Nepal .\n";
	
	string word_to_count = "Nepal";
	
	ofs.close();
	
	ifstream ifs("newFile.txt");
	
	string word;
	int count = 0;
	
	while(ifs >> word) {
		
		if(word == word_to_count) {
			count++;
		}
	}
	
	ifs.close();
	
	cout<<"Number of word = " <<count<<endl;
	
	return 0;
}
