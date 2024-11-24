#include <iostream>
#include <fstream> // for file input and output 
#include <string> // for string input

using namespace std;
int main() {
	/*writing to a file. output. txt file will be created in the directory of this source file*/

	ofstream outfile("output.txt");
	outfile << "Writing to a file."<<endl;
	outfile.close();

	//reading from a file 
	ifstream inFile("output.txt");
	string content;
	while (std::getline(inFile, content))
	{
		cout << content << endl;

	}
	inFile.close(); // close the file after reading its contents

	return 0;
}