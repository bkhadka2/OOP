#include <iostream>
#include <string>
#include "../include/UsBank.h"
#pragma once

using std::cout, std::endl, std::string, std::cin;

class WellsFargoBank: public UsBank
{
    protected:
        string name;
        double interestRate;
        double balance;
        double loans;
    public:
        WellsFargoBank();
        WellsFargoBank(string, double, double, double);
}