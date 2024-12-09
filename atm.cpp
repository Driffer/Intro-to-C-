#include <iostream>
using namespace std;

int main() {
    double accountBalance = 10000.00; // Example balance
    double dailyLimit = 5000.00; // Example daily withdrawal limit
    double withdrawalAmount;
    char proceed;

    cout << "Enter amount to withdraw: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds in your account." << endl;
    } else if (withdrawalAmount > dailyLimit) {
        cout << "Withdrawal amount exceeds daily limit." << endl;
    } else {
        cout << "Are you sure you want to withdraw $" << withdrawalAmount << "? (y/n): ";
        cin >> proceed;
        if (proceed == 'y' || proceed == 'Y') {
            accountBalance -= withdrawalAmount;
            cout << "Withdrawal successful." << endl;
            cout << "Remaining balance: $" << accountBalance << endl;
        } else {
            cout << "Transaction cancelled." << endl;
        }
    }

    return 0;
}
