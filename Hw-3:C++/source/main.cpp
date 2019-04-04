#include <iostream>
#include <string>
#include <memory>
#include "../header/bank.h"


using namespace std;

int main(int argc, const char ** argv)
{
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