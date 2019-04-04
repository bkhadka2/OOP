#include <iostream>
#include <string>

#pragma once

class Bank
{
    private:
        double balance;
        std::string fullName;
        double loans;
    public:
        Bank();
        Bank(double, std::string, double);
        ~Bank();
        void setBalance();
        double getBalance() const;
        void setName();
        std::string getName() const;
        double totalInterest();
        double totalBalanceAfterAddingBonusInterest();
        bool withdrawMoney();
        void LoanMoney();
        void displayInfo() const;
};