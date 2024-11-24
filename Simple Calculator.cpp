#include <iostream>
using namespace std;

int main() {
	
	int intA;
	int intB;
	int sum;
	int subtraction;
	int multiplication;
	int division;

	cout<<"Enter first number: " << endl;
	cin>>intA;

	cout<<"Enter second number: " << endl;
	cin>>intB;

	sum = intA + intB;
	cout << "The sum is: " << sum << endl;

	subtraction = intA - intB;
	cout << "The subtraction is: " << subtraction << endl;

	multiplication = intA * intB;
	cout << "The multiplication is: " << multiplication << endl;

	division = intA / intB;
	cout << "The division is: " << division << endl;

	return 0;
}