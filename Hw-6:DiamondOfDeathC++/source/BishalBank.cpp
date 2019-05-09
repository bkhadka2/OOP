#include <iostream>
#include <string>
#include "../include/BishalBank.h"

using namespace std;

BishalBank::BishalBank()
{
    this->CEO = "";
}

void BishalBank::DisplayName(string name)
{
    this->name = name;
}

BishalBank::BishalBank(double b, string n, string CEO)
{
    this->CEO = CEO;
}

BishalBank::~BishalBank()
{

}

void BishalBank::securityCenter()
{
    cout << "Welcome to the security center of Bishal Bank" << endl;
    cout << "Security Team" << endl;
    cout << "=================" << endl;
    cout << "1. Bishal Khadka" << endl;
    cout << "2. Dr. Macevoy" << endl;
}

void BishalBank::financialPlanning()
{
    double amount;
    cout << "Take loan: ";
    cin >> amount;
    cout << "Total loan you took is: " << amount << endl;
}
