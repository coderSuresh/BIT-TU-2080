#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream file("testfile.txt");
	if (!file) {
		cout << "File could not be opened." << endl;
		return 0;
	}
	int wordCount = 0, lineCount = 1, charCount = 0;
	char ch;
	int inWord = 0;
	while (file.get(ch)) {
		charCount++;
		// Count lines
		if (ch == '\n') {
			lineCount++;
		}
		// Count words
		if (isspace(ch)) {
			if (inWord == 1) {
				wordCount++;
				inWord = 0;
			}
		} else {
			inWord = 1;
		}
	}
	// To count the last word if the file doesn't end with a space or newline
	if (inWord == 1) {
		wordCount++;
	}
	
	file.close();
	cout << "Number of lines: " << lineCount << endl;
	cout << "Number of words: " << wordCount << endl;
	cout << "Total file size: " << charCount << " bytes" << endl;
	return 0;
}
