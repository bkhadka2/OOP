#include <iostream>
#include <string>
#include <iomanip>
#include "../header/bank.h"

using namespace std;

Bank::Bank()
    :balance{0.0}, fullName{""}, loans{0.0}
{

}

Bank::Bank(double bal, string name, double loan)
    :balance{bal}, fullName{name}, loans{loan}
{

}

Bank::~Bank()
{

}

void Bank::setBalance()
{
    double bal;
    cout << "Enter the amount you want to deposit: ";
    cin >> bal;
    this->balance = bal;
}

void Bank::setName()
{
    string n;
    cout << "Enter the name you prefer: ";
    cin >> n;
    this->fullName = n;
}

double Bank::getBalance() const
{
    return balance;
}

std::string Bank::getName() const
{
    return fullName;
}

double Bank::totalInterest()
{
    double totalInterest;
    double interestRate;
    interestRate = 2.35;
    totalInterest = interestRate / 100 * balance;
    return totalInterest;
}

double Bank::totalBalanceAfterAddingBonusInterest()
{
    double interest = totalInterest();
    double totalBalance = balance + interest;
    this->balance = totalBalance;
    return this->balance;
}

bool Bank::withdrawMoney()
{
    bool result{true};
    char response;
    double amount;
    cout << "Do you want to withdraw money? (y/n) ";
    cin >> response;
    if(response == 'Y' || response == 'y')
    {
        double totalBalance = this->balance;
        
        while(result == true)
        {  
            totalBalance = this->balance;
            cout << "Enter the amount you want to withdraw: ";
            cin >> amount;
            totalBalance = balance - amount;          
            if(totalBalance < 0)
            {
                cout << "The balance is insufficient..." << endl;
                cout << "Do yo want to withdraw other amount?(y/n) ";
                cin >> response;
                if(response == 'y' || response == 'Y')
                {
                    result = true;
                }
                else
                {
                    this->balance = balance - amount;
                    result = false;
                }                
            }
            else
            {
                this->balance = totalBalance;
                cout << "----------------------" << endl;
                cout << "You withdrew $" << amount << endl;
                cout << "----------------------" << endl;
                result = false;
            }                       
        }        
    }
    return true;
}

void Bank::LoanMoney()
{
    char response;
    double amount;
    double loanInterest = 8.95;
    cout << "Loan from our bank.. 2% cheaper than other bank" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Do you want to loan some money? (y/n)" << endl;
    cin >> response;
    if(response == 'y' || response == 'Y')
    {
        cout << "Enter the amount you want to loan: ";
        cin >> amount;
        double totalLoan = amount + loanInterest / 100 * amount;
        cout << "Before adding interest: " << fixed << setprecision(2) << amount << endl;
        cout << "------------------------------" << endl;
        cout << "After adding interest: " << fixed << setprecision(2) << totalLoan << endl;
        cout << "------------------------------" << endl;
        this->loans = totalLoan;
        cout << "The loan amount has been added to your account" << endl;
        
    }
    else
    {
        cout << "Remember us when you want to loan money" << endl;
    }
    
}

void Bank::displayInfo() const
{
    cout << setw(20) << left << "Full Name" << setw(20) << "Total Balance" << setw(20) << "Total Loan" << endl;
    cout << "======================================================" << endl;
    cout << setw(20) << fixed << setprecision(2) << fullName << setw(20) << balance << setw(20) << loans << endl;
    cout << "======================================================" << endl;
    cout << endl;
}
