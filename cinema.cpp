#include <iostream>
using namespace std;

int main() {
    int customerAge;
    string movieType;
    double ticketPrice;

    cout << "Enter the customer's age: ";
    cin >> customerAge;
    cout << "Enter the movie type (regular or 3D): ";
    cin >> movieType;

    if (movieType == "regular") {
        if (customerAge < 12) {
            ticketPrice = 5.00;
        } else if (customerAge < 18) {
            ticketPrice = 7.00;
        } else {
            ticketPrice = 10.00;
        }
    } else if (movieType == "3D") {
        if (customerAge < 12) {
            ticketPrice = 8.00;
        } else if (customerAge < 18) {
            ticketPrice = 10.00;
        } else {
            ticketPrice = 15.00;
        }
    } else {
        cout << "Invalid movie type" <<[_{{{CITATION{{{_1{](https://github.com/TasnimAnas/Class_Assignments/tree/cefcb14eed24421c4c526bab7264435ea0f559e8/2nd%20Sem%2FC++%20Codes%2FPart%207%2F6.cpp)[_{{{CITATION{{{_2{](https://github.com/jeanettable/CS1/tree/a6ba2ed4870c279f8583653c893a5545b0a776ed/Quiz4%2Fquiz4-1.cpp)[_{{{CITATION{{{_3{](https://github.com/archeltaneka/ExerciseReview-3/tree/77b737636e55abe61041c499ddda8cde83008327/23.cpp)