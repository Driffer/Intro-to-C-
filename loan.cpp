#include <iostream>
using namespace std;

struct Customer {
    int age;
    double bankBalance;
    string crbStatus;
    int monthsAsCustomer;
};

bool yourNameLoanCalculator(Customer customer) {
    return customer.age > 22 &&
           customer.bankBalance > 50000 &&
           customer.crbStatus == "good" &&
           customer.monthsAsCustomer > 6;
}

int main() {
    Customer customer;
    cout << "Enter customer age: ";
    cin >> customer.age;
    cout << "Enter bank balance: ";
    cin >> customer.bankBalance;
    cout << "Enter CRB status (good/bad): ";
    cin >> customer.crbStatus;
    cout << "Enter months as a customer: ";
    cin >> customer.monthsAsCustomer;

    if (yourNameLoanCalculator(customer)) {
        cout << "Customer qualifies for a loan." << endl;
    } else {
        cout << "Customer does not qualify for a loan." << endl;
    }

    return 0;
}
