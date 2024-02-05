#include <iostream>
#include <iomanip>
#include <math.h>
#include "InvestmentGrowth.h"
using namespace std;

void InvestmentGrowth::SetRates(int year, double initial, double rate, double depositAmt) {
    numYears = year;
    initialINV = initial;
    interestRate = rate;
    deposit = depositAmt;
}

void InvestmentGrowth::PrintBalances() {
    cout << setprecision(2) << fixed;
    cout << "With no monthly deposit:" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "                      " << "Balances" << "           " << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Year            " << "Year End Balance             " << "Earned Interest" << endl;

    total = initialINV;

    for (int i = 1; i <= numYears; i++) {
        annualInterest = (total * (interestRate / 100));
        total = total + ( total * (interestRate / 100));

        cout << i << "               "  << total << "                         " << annualInterest << endl;
    }

    cout << "With monthly deposit of: " << deposit << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "                      " << "Balances" << "           " << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Year            " << "Year End Balance             " << "Earned Interest" << endl;

    total = initialINV;

    for (int i = 1; i <= numYears; i++) {
        annualInterest = 0;
        for (int t = 1; t <= 12; t++) {
            annualInterest += ((total + deposit) * (interestRate / 100 / 12));
            total = total + deposit + ((total + deposit) * (interestRate / 100 / 12));
        }

        cout << i << "               " << total << "                         " << annualInterest << endl;
    }
}
