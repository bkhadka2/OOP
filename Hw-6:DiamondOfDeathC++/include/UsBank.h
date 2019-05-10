#include <iostream>
#include <string>
#include "../include/Bank.h"
#pragma once

class UsBank : virtual public Bank
{
    using Bank::Bank;
    protected:
        double checkingBal, savingBal;
    public:
        UsBank();
        UsBank(double, std::string, double, double);
        virtual ~UsBank();
        virtual void DisplayName(std::string) override;
        virtual void AccountType();
        virtual void Transfer();
        virtual void AccountSummary() const;
};