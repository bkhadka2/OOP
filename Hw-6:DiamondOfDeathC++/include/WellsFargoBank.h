#include <iostream>
#include <string>
#include "../include/Bank.h"
#pragma once

class WellsFargoBank : virtual public Bank
{
    using Bank::Bank;
    protected:
        std::string status;
    public:
        WellsFargoBank();
        WellsFargoBank(double, std::string, std::string);
        virtual ~WellsFargoBank();
        virtual void DisplayName(std::string name) override;
        virtual void DepositChecks(double amount);
        virtual std::string DisplayStatus();
        virtual void display() const override; 
};