#include <iostream>
#include <string>
#include <memory>
#include "../include/Bank.h"
#include "../include/UsBank.h"
#include "../include/WellsFargoBank.h"

using namespace std;

int main(int argc, const char ** argv)
{
    shared_ptr<UsBank> ptr = make_shared<UsBank>();
    ptr->DisplayName("US Bank");
    ptr->deposit();
    ptr->withdraw();
    ptr->AccountType();
    ptr->AccountSummary();
    cout << "################################" << endl;
    unique_ptr<WellsFargoBank> ptr2 = make_unique<WellsFargoBank>();
    ptr2->DisplayName("WellsFargo Bank");
    ptr2->deposit();
    ptr2->withdraw();
    ptr2->DepositChecks(1000);
    ptr2->DisplayStatus();
    ptr2->display();
    return 0;
}