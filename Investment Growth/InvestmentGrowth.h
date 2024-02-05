#ifndef INVESTMENTGROWTH_H
#define INVESTMENTGROWTH_H

class InvestmentGrowth {
public:
    int numYears;
    double initialINV;
    double interestRate;
    double deposit;

    void SetRates(int years, double initial, double rate, double depositAmt);
    void PrintBalances();


private:
    double annualInterest;
    double total;

};
#endif