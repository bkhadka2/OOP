#include <iostream>
#include <string>
#include "../include/Bank.h"
using namespace std;

Bank::Bank()
    :balance{0.0}, name{""}
{

}

Bank::Bank(double bal, string nam)
    :balance{bal}, name{nam}
{

}

Bank::~Bank()
{

}

void Bank::DisplayName(string name)
{
    cout << "Welcome to Main Bank" << endl;
    cout << "==============================" << endl;
    this->name = name;
}
void Bank::withdraw()
{
    double amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;
    cout << "You have withdrawn " << amount << " USD" << endl;
    this->balance -= amount;
}

void Bank::deposit()
{
    double amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;
    cout << "You have deposited " << amount << " USD" << endl;
    this->balance += amount;
}

void Bank:: display() const
{
    cout << "*******************************" << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
    cout << "*******************************" << endl;
}

