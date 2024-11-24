#include <iostream>
using namespace std;

int main() {
	//Variable declaration and initialization
	int area;
	int length;
	int width;

	cout << "Enter length: "<<endl; //Ask user for length
	cin >> length; //Capture length

		cout << "Enter Width: " << endl; //Ask user for width
		cin >> width; //Capture width

	area = length * width;
	//output
	cout << "Area of the triangle is: " << area;
	return 0;
}