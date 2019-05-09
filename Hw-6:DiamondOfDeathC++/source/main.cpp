#include <iostream>
#include <string>
#include <memory>
#include "../include/Bank.h"
#include "../include/UsBank.h"
#include "../include/WellsFargoBank.h"
#include "../include/BishalBank.h"
#include <cassert>

using namespace std;

int main(int argc, const char ** argv)
{
    shared_ptr<UsBank> ptr = make_shared<UsBank>();
    ptr->DisplayName("US Bank");
    ptr->deposit();
    ptr->withdraw();
    ptr->AccountType();
    ptr->AccountSummary();
    double fin = ptr->getBalance();
    assert(fin >= 0);
    cout << "Test Case Passed..." << endl;
    cout << "Balance over zero checked..." << endl;

    cout << "#####################################################" << endl;
    unique_ptr<WellsFargoBank> ptr2 = make_unique<WellsFargoBank>();
    ptr2->DisplayName("WellsFargo Bank");
    ptr2->deposit();
    ptr2->withdraw();
    ptr2->DepositChecks(1000);
    ptr2->DisplayStatus();
    ptr2->display();
    cout << "#####################################################" << endl;
    unique_ptr<BishalBank> ptr3 = make_unique<BishalBank>();
    ptr3->AccountType();
    ptr3->Transfer();
    ptr3->DepositChecks(5000.00);
    ptr3->DisplayStatus();
    ptr3->AccountSummary();
    return 0;
}