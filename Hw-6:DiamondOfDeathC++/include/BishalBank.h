#include <iostream>
#include <string>
#pragma once
#include "../include/Bank.h"
#include "../include/UsBank.h"
#include "../include/WellsFargoBank.h"

using std::cout, std::cin, std::endl, std::string;

class BishalBank : public UsBank, public WellsFargoBank
{
    using UsBank::UsBank;
    using WellsFargoBank::WellsFargoBank;

    protected:
        string CEO;
    public:
        BishalBank();
        BishalBank(double, string, string);
        virtual ~BishalBank();
        virtual void securityCenter();
        virtual void financialPlanning();
};
