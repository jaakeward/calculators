#include <iostream>
#include <string>
#include "InvestmentGrowth.h"

using namespace std;

int main() {

	InvestmentGrowth UserInv;
	int years;
	double initial, rate, deposit;

	string userOpt = "";

	while (userOpt != "quit") {
		cout << "Enter years: ";
		cin >> years;
		cout << "Enter initial amount:";
		cin >> initial;
		cout << "Enter interest rate:";
		cin >> rate;
		cout << "Enter monthly deposit:";
		cin >> deposit;
		cout << endl;

		UserInv.SetRates(years, initial, rate, deposit);

		UserInv.PrintBalances();

		cout << "Enter anything to continute, or \"quit\" to quit" << endl;
		cin >> userOpt;

	}
	return 0;
}
