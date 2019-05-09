#include <iostream>
#include <string>
#include "../include/Bank.h"
#pragma once

using std::cout, std::cin, std::endl, std::string;

class UsBank : virtual public Bank
{
    using Bank::Bank;
    protected:
        double checkingBal, savingBal;
    public:
        UsBank();
        UsBank(double, string, double, double);
        virtual ~UsBank();
        virtual void DisplayName(string) override;
        virtual void AccountType();
        virtual void Transfer();
        virtual void AccountSummary() const;
};