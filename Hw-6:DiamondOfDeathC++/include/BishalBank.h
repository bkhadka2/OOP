#include <iostream>
#include <string>
#pragma once
#include "../include/Bank.h"
#include "../include/UsBank.h"
#include "../include/WellsFargoBank.h"

class BishalBank : public UsBank, public WellsFargoBank
{
    using UsBank::UsBank;
    using WellsFargoBank::WellsFargoBank;

    protected:
        std::string CEO;
    public:
        BishalBank();
        BishalBank(double, std::string, std::string);
        virtual ~BishalBank();
        virtual void DisplayName(std::string name) override;
        virtual void securityCenter();
        virtual void financialPlanning();
};
