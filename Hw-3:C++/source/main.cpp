#include <iostream>
#include <string>
#include <memory>
#include <assert.h>
#include "../header/bank.h"


using namespace std;

int main(int argc, const char ** argv)
{
    // Assertion Testing 
    // Testing if the person's balance is less than 0;
    // If the person's balance is less than zero,program will terminate else continue.
    Bank obj(-100, "Bishal", 100);
    int temp = obj.getBalance();
    assert(temp >= 0);
    cout << "Test Passed.. You don't have a negative balance" << endl;

    shared_ptr<Bank> ptr = make_shared<Bank> ();
    ptr->setName();
    ptr->setBalance();
    ptr->getBalance();
    ptr->getName();
    ptr->displayInfo();
    cout << "Balance after adding bonus interest" << endl;
    cout << "--------------------------------------" << endl;
    ptr-> totalBalanceAfterAddingBonusInterest();
    ptr->displayInfo();
    bool b;
    b = ptr->withdrawMoney();
    if( b == true)
    {
        ptr->displayInfo();
    }
    ptr->LoanMoney();
    ptr->displayInfo();

    
    return 0;
}