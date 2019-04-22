#include <iostream>
#include <string>
#pragma once

using std::cout, std::endl, std::string, std::cin;

class UsBank
{
    protected:
        string name;
        double interestRate;
        double balance;
        double loans;
    public:
        UsBank();
        UsBank(string, double, double, double);
        virtual ~UsBank();
        virtual void setName(string);
        virtual void setInterest(double);
        virtual void setBalance(double);
        virtual double totalBalance();
        virtual double totalLoans();
        virtual void loanPaymentOptions();
        virtual double withdraw();
        virtual void display() const;
}