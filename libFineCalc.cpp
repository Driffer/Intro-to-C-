#include <iostream>
using namespace std;

int main() {
    int daysLate;
    string bookType;
    double fineAmount = 0.0;

    cout << "Enter the number of days late: ";
    cin >> daysLate;
    cout << "Enter the type of book (regular, children's, reference): ";
    cin >> bookType;

    if (bookType == "regular") {
        if (daysLate <= 7) {
            fineAmount = daysLate * 0.5;
        } else {
            fineAmount = 7 * 0.5 + (daysLate - 7) * 1.0;
        }
    } else if (bookType == "children's") {
        fineAmount = daysLate * 0.25;
    } else if (bookType == "reference") {
        fineAmount = daysLate * 1.5;
    } else {
        cout << "Invalid book type" << endl;
        return 1;
    }

    cout << "Late fee: $" << fineAmount << endl;

    return 0;
}
