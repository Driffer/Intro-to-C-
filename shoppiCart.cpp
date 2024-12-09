#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, totalCost;
    double discountRate = 0.0;

    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;

    if (purchaseAmount > 1000) {
        discountRate = 0.15;
    } else if (purchaseAmount > 500) {
        discountRate = 0.10;
    } else if (purchaseAmount > 100) {
        discountRate = 0.05;
    }

    totalCost = purchaseAmount - (purchaseAmount * discountRate);
    cout << "Total cost after discount: $" << totalCost << endl;

    return 0;
}
