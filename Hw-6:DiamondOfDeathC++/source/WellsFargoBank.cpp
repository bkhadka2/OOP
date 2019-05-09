#include <iostream>
#include <string>
#include "../include/WellsFargoBank.h"

using namespace std;

WellsFargoBank::WellsFargoBank()
{
    this->status = "";
}

WellsFargoBank::WellsFargoBank(double b, string n,string stat)
{
    this->status = stat;
}

WellsFargoBank::~WellsFargoBank()
{

}

void WellsFargoBank::DisplayName(string name)
{
    cout << "Welcome to " << name << endl;
    cout << "WellsFargo is a way to go" << endl;
    cout << "========================" << endl;
    this->name = name;
}

void WellsFargoBank::DepositChecks(double amount)
{
    cout << "Your check of amount " << amount << " has been deposited" << endl;
    this->balance += amount;
}

string WellsFargoBank::DisplayStatus()
{
    string result{};
   if(this->balance < 100)
   {
       result = "Low Balance status";
   } 
   else if(this->balance >=100 && this->balance < 1000 )
   {
       result = "Good Balance status";
   }
   else
   {
       result = "High Balance status";
   }
   this->status = result;
   return this->status;
}

void WellsFargoBank::display() const
{
    cout << "*******************************" << endl;
    cout << "Name: " << this->name << endl;
    cout << "Balance: " << this->balance << endl;
    cout << "Status: " << this->status << endl;
    cout << "*******************************" << endl;
}  

