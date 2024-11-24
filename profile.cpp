#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName, lastName, fullName, favouriteMeal, favouriteMovie;

	//prompt user for first name
	cout << "Please enter your first name :";
	getline(cin, firstName);

		//prompt user for last name
		cout << "Please enter your last name :";
		getline(cin, lastName);

		fullName = firstName + " " + lastName;

		// Prompt user for their favorite meal
		cout << "Please enter your favourite meal :";
		getline(cin, favouriteMeal);

		// Prompt user for their favorite movie
		cout << "Please enter your favourite movie :";
		getline(cin, favouriteMovie);

		cout << "First Name: " << firstName << endl;
		cout << "Last Name: " << lastName << endl;
		cout << "Full Name: " << fullName << endl;
		cout << "Favorite Meal: " << favouriteMeal << endl;
		cout << "Favorite Movie: " << favouriteMovie << endl;




}