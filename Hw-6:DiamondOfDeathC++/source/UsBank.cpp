#include <iostream>
#include <string>
#include "../include/UsBank.h"

using namespace std;

UsBank::UsBank()
{
    this->checkingBal = 0.0;
    this->savingBal = 0.0;
}

UsBank::UsBank(double b, string n, double che, double sav)
{
    this->checkingBal = che;
    this->savingBal = sav;
}

UsBank::~UsBank()
{

}

void UsBank::DisplayName(string name) 
{
    cout << "Welcome to " << name << endl;
    cout << "================================" << endl;
    this->name = name;
}

void UsBank::AccountType()
{
    double cBal{0.0}, sBal{0.0};
    char chooseAccountType;
    double savingAccountFee{0.0};    
    savingAccountFee = 0.025 * this->balance;
    this->savingBal = 0.25 * this->balance - savingAccountFee;
    this->balance -=savingAccountFee;
    this->checkingBal = 0.75 * this->balance;
    cout << "Enter c/C for checking account or s/S for saving account: ";
    cin >> chooseAccountType;
    switch(chooseAccountType)
    {
        case 'c': case 'C':
            cout << "You have Selected checking account" << endl;
            
            cout << "You have " << this->checkingBal << " balance in checking account" << endl;
            break;
        case 's': case 'S':
            cout << "You have Selected saving account" << endl;
            cout << "You have " << this->savingBal << " balance in checking account after " << savingAccountFee << " fee on it" << endl;
           
            break;
        default:
            cout << "No any account selected" << endl;
            break;
    }
}

void UsBank::Transfer()
{
    double amount;
    string accountName;
    cout << "Enter c-s or s-c to transer money from checking to saving and saving to checing respectively";
    cin >> accountName;
    if(accountName == "c-s")
    {
        cout << "Enter the amount to transfer: ";
        cin >> amount;
        this->savingBal += amount;
        this->checkingBal -= amount;
        this->balance = savingBal + checkingBal;
        cout << "Cheking to Saving Balance transfer Successful" << endl;
    }
    else
    {
        cout << "Enter the amount to transfer: ";
        cin >> amount;
        this->checkingBal += amount;
        this->savingBal -= amount;
        this->balance = savingBal + checkingBal;
        cout << "Saving to Checking Balance transfer Successful" << endl;
    }    
}

void UsBank::AccountSummary() const
{
    cout << "*******************************" << endl;
    cout << "Name: " << this->name << endl;
    cout << "TotalBalance: " << this->balance << endl;
    cout << "Checking Balance: " << this->checkingBal << endl;
    cout << "Saving Balance: " << this->savingBal << endl;
    cout << "*******************************" << endl;
}