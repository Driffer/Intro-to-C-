#include <iostream>
using namespace std;

int main() {
	int intA; //declare variables
	int intB;
	bool boolVar1 = true, boolVar2 = false;  //declare and initialize bool variable

	cout << "Input first value: " << endl;  //prompt user for input and capture input
	cin >> intA;

	cout << "Input Second value: " << endl;
	cin >> intB;

	//Arithmetic operators
	//addition operator
	cout << "Sum of " << intA << " + " << intB << " = " << intA + intB << endl;

	//subtraction operator
	cout << "Difference of " << intA << " - " << intB << " = " << intA - intB << endl;

	//multiplication operator
	cout << "Product of " << intA << " * " << intB << " = " << intA * intB << endl;

	//division operarator
	cout << "Division of " << intA << " / " << intB << " = " << intA / intB << endl;

	//modulus operator
	cout << "Modulus of " << intA << " % " << intB << " = " << intA % intB << endl;

	//increment operaator ++ as prefix
	cout << "Prefix Increment intA by 1 : " << ++intA << endl;

	//increment operaator ++ as postfix
	cout << "Postfix Increment " << intB << "by 1 : " << intB++ << endl;

	//decrement operator -- as a prefix
	cout << "Prefix Decrement intA by 1 : " << --intA << endl;

	//decrement operator -- as a postfix
	cout << "Postfix Increment " << intB << "by 1 : " << intB-- << endl;

	//increment and assign operation eg increase intA by 3
	intA += 3;  //This is the same as intA = intA + 3
	cout << "Increment asn assign intA by 3 : " << intA << endl;

	//comparison operator
	//greater than operator                          //in brackets typecasting from integer to boolean variable
	cout << intA << "greater than : " << intB << " = " << (bool)(intA > intB) << endl;

	//less than operator
	cout << intA << "less than : " << intB << " = " << (bool)(intA < intB) << endl;

	//equal to operator
	cout << intA << "equal to : " << intB << " = " << (bool)(intA == intB) << endl;

	//not equal to operator
	cout << intA << "not equal to : " << intB << " = " << (bool)(intA != intB) << endl;

	//Boolean operators
	//boolean &&
	cout << boolVar1 << "&&" << boolVar2 << " = " << (boolVar1 && boolVar2) << endl;

	//boolean operator ||
	cout << boolVar1 << "||" << boolVar2 << " = " << (boolVar1 || boolVar2) << endl;

	//boolean operator !
	cout << boolVar1 << "!" << boolVar2 << " = " << (boolVar1) << endl;

	//true && true = true
	//true && false = false
	//false && true = false
	//false && false = false
	//true || true = false
	//true || false = true

	//Pointer operations
	//declare a pointer
	int* ptr = nullptr;
	//assign a value to the poimter
	ptr = & intA;
	//output address of intA
	cout << "Address of intA : " << &intA << endl;
	//dereference the pointer to get the value at the memory location
	cout << "Value at memory location pointed by ptr = " << *ptr << endl;

	return 0;







}