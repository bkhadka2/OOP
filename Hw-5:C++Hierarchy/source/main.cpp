#include <iostream>
#include <string>
#include <memory>
#include <cassert>
#include "../include/UsBank.h"
#include "../include/WellsFargoBank.h"

using namespace std;

int main(int argc, const char ** argv)
{
    shared_ptr<UsBank> ptr = make_shared<WellsFargoBank>();
    ptr->setName("Wells Fargo");
   
    ptr->setInterest(2.85);
    ptr->setBalance(1000.0);
    ptr->totalBalance();
    assert(ptr->totalBalance() >= 0);
    cout << "============================" << endl;
    cout << "Balance is greater than 0" << endl;
    cout << "============================" << endl;
    cout << "Test passed" << endl;
    ptr->takeLoan();
    ptr->loanPaymentOptions();
    ptr->display();
    return 0;
}