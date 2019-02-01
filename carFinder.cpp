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
        void chooseCarsAndYear();
        double calculatePrice();
};

CarsCollection::CarsCollection()
    :make{"none"}, model{"none"}, year{0}
{

}

CarsCollection::CarsCollection(string make, string model, int year)
{
    this->make = make;
    this->model = model;
    this->year = year;
}

CarsCollection::~CarsCollection()
{

}

void CarsCollection::chooseCarsAndYear()
{
    bool choose {false};
    
    while(!choose)
    {
        cout<<"Choose the car from the options"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"Enter the first letter of the car Model: ";
        char mod;
        cin>>mod;
        switch (mod)
        {
            case 'd':
                cout<<"the only model we have is Dodge"<<endl;
                this->model= "Dodge";
                this->make = "Avenger";
                choose = true;
                break;
            default:
                cout<<"The car you selected does not exist"<<endl;
        }

    };
}

double CarsCollection::calculatePrice()
{
    int y;
    cout<<"Enter the car year: ";
    cin>>y;
    year = y;
    cout<<"The price for "<<model << " "<<make<<" is "<<year * 100<<endl;
}

int main(int argc, const char ** argv)
{
    CarsCollection car1;
    car1.chooseCarsAndYear();
    car1.calculatePrice();
}