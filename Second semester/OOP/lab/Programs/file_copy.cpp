#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// Open the input file
	ifstream inputFile("testfile.txt");
	if (!inputFile) {
		cout << "Error opening input file!" << endl;
		return 1;
	}
	// Open the output file
	ofstream outputFile("output.txt");
	if (!outputFile) {
		cerr << "Error opening output file!" << endl;
		return 1;
	}
	// Read from the input file and write to the output file
	string line;
	while (getline(inputFile, line)) {
		outputFile << line << endl;
	}
	// Close the files
	inputFile.close();
	outputFile.close();
	cout << "File copying completed successfully." << endl;
	return 0;
}
