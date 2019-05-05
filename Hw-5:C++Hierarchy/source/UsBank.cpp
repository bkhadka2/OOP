#include <iostream>
#include "../include/UsBank.h"

using namespace std;

void choices()
{
    cout << "P: Partial Payment (25% payment)" << endl;
    cout << "H: Half Payment (50% payment)" << endl;
    cout << "MH: More than half payment(75% payment)" << endl;
    cout << "F: Full Payment (100% payment)" << endl;
}

UsBank::UsBank()
    :name{""}, interestRate{0.0}, balance{0.0}, loans{0.0}
{

}

UsBank::UsBank(string _name, double _interestRate, double _balance, double _loans)
    :name{_name}, interestRate{_interestRate}, balance{_balance}, loans{_loans}
{

}

UsBank::~UsBank()
{

}

void UsBank::setName(string name)
{
    this->name = name;
}

void UsBank:: setInterest(double _interestRate)
{
    this->interestRate = _interestRate;
}

void UsBank::setBalance(double _balance)
{
    this->balance = _balance;
}

double UsBank::totalBalance()
{
    double totalBal = this->balance +(this->balance * (interestRate/100)); 
    this->balance = totalBal;
}

void UsBank::takeLoan()
{
     double loan;
    cout << "Enter the loan you want to take from our bank: ";
    cin >> loan;
    cout << "The loan you borrowed from us is: " << loan << endl;
    this->loans = loan;
}

double UsBank::totalLoans()
{
    return this->loans;
}

void UsBank::loanPaymentOptions()
{
    cout << "Welcome to Loan Payment department" << endl;
    cout << "====================================" << endl;
    char options;
    double totLoaPay{};
    cout << "The options are follows: " << endl;
    choices();
    bool didChoose{false};
    do
    {
        cout << "Choose the character to make a payment: ";
        cin >> options;
        switch(options)
        {
            case 'P': 
            case 'p': 
                cout << "Thank you for your partial loan payment(25% of your balance)" << endl;
                totLoaPay = (25/100) *this->loans;
                this->loans = loans - totLoaPay;
                didChoose = true;
                break;
            case 'H':
            case 'h':
                cout << "Thank you for your half loan payment(50% of your balance)" << endl;
                totLoaPay = 50/100 * this->loans;
                this->loans = this->loans - totLoaPay;
                didChoose = true;
                break;
            case 'M':
            case 'm':
                cout << "Thank you for your more than half loan payment(75% of your balance)" << endl;
                totLoaPay = 75/100* this->loans;
                this->loans = loans - totLoaPay;
                didChoose = true;
                break;
            case 'F':
            case 'f':
                cout << "Thank you for your full loan payment(100% of your balance)" << endl;
                totLoaPay = 100/100* this->loans;
                this->loans = loans - totLoaPay;
                didChoose = true;
                break;
            default:
                cout << "No any options provided" << endl;
                break;
        }
    }while(!didChoose);
}

double UsBank::withdraw()
{
    double withDraw;
    cout << "Enter the money you want to withdraw: ";
    cin >> withDraw;
    cout << "You withdrew " << withDraw << endl;
    this->balance = balance - withDraw;
    return this->balance;
}


void UsBank::display() const
{
    cout << "Welcome to " << this->name << endl;
    cout << "=====================================" << endl;
    cout << "Your total Loan is: " << this->loans << endl;
    cout << "=====================================" << endl;
    cout << "Your total Bank Balance is: " << this->balance << endl;
    cout << "=====================================" << endl;
    cout << "The total interest of the bank is: " << this->interestRate <<" %" << endl;
    cout << "===============================================" << endl;
    cout << "The total loans after adding interest: " << ((this->interestRate/100) * this->loans)+loans << endl;
    
}
