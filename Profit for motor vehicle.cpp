#include <iostream>
using namespace std;

int main() {
	float buyingprice, sellingprice, profit;
	cout << "Enter the buying price of the vehicle" << endl;
	cin >> buyingprice;

	cout << "Enter the selling price of the vehicle" << endl;
	cin >> sellingprice;

	profit = sellingprice - buyingprice;
	cout << "Buying price is = " << buyingprice << " sellingprice is = " << sellingprice << "  profit = " << profit << endl;
	return 0;
}