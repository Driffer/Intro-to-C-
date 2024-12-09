#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;

    switch (firstNumber > secondNumber) {
        case true:
            cout << "Maximum number: " << firstNumber << endl;
            break;
        case false:
            cout << "Maximum number: " << secondNumber << endl;
            break;
    }

    return 0;
}
