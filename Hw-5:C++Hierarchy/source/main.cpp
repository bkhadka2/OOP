#include <iostream>
#include <string>
#include <memory>
#include "../include/UsBank.h"
#include "../include/WellsFargoBank.h"

using namespace std;

int main(int argc, const char ** argv)
{
    shared_ptr<UsBank> ptr = make_shared<WellsFargoBank>();
    ptr->setName("Wells Fargo");
    ptr->setInterest(2.85);
    ptr->display();
    return 0;
}