#include <iostream>
#include <string>
#include "../include/WellsFargoBank.h"

using namespace std;

WellsFargoBank::WellsFargoBank()
    :name{""}, interestRate{0.0}, balance{0.0}, loans{0.0}
{

}

WellsFargoBank::WellsFargoBank(string _name, double _interestRate, double _balance, double _loans)
    :name{"Wells Fargo"}, interestRate{_interestRate}, balance{_balance}, loans{_loans}
{
    
}
