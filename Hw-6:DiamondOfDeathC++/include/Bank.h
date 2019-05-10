#include <iostream>
#include <string>

#pragma once


class Bank
{
    protected:
        double balance;
        std::string name;

    public:
        Bank();
        Bank(double, std::string);
        virtual void DisplayName(std::string);
        virtual ~Bank();
        virtual void withdraw();
        virtual void deposit();
        virtual void display() const;
        double getBalance() const;
};