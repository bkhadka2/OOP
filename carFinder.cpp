#include <iostream>
#include <string>
using namespace std;

class CarsCollection
{
    private:
        string make, model;
        int year;
    public:
        CarsCollection();
        CarsCollection(string, string, int);
        ~CarsCollection();
        double calculatePrice();
};