#include <iostream>
#include <string>

#pragma once
using std::cout, std::cin, std::endl, std::string;

class Bank
{
    protected:
        double balance;
        string name;

    public:
        Bank();
        Bank(double, string);
        virtual void DisplayName(string);
        virtual ~Bank();
        virtual void withdraw();
        virtual void deposit();
        virtual void display() const;
};