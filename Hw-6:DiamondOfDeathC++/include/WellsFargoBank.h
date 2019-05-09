#include <iostream>
#include <string>
#include "../include/Bank.h"
#pragma once

using std::cout, std::cin, std::endl, std::string;

class WellsFargoBank : public Bank
{
    using Bank::Bank;
    protected:
        string status;
    public:
        WellsFargoBank();
        WellsFargoBank(double, string, string);
        virtual ~WellsFargoBank();
        virtual void DisplayName(string name) override;
        virtual void DepositChecks(double amount);
        virtual string DisplayStatus();
        virtual void display() const override; 
};