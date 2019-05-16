#include <iostream>
#include <string>
#include <ctime>
#include <assert.h>

using namespace std;


class CarFeatures
{
    public:
        virtual string color() = 0;
        virtual double mileage() = 0;
        virtual double carPrice() = 0;
        virtual void carAge() = 0;
        virtual string engine() = 0;
};

class V6Engine : public CarFeatures
{
    public:
        string color()
        {
            return "Car color is Yellow";
        }

        double mileage()
        {
            return 25;
        }

        double carPrice()
        {
            return 25000.00;
        }

        void carAge()
        {
            int manufacturing_Year;
            cout << "Enter the car manufacturing year: ";
            cin >> manufacturing_Year;
            time_t t = time(NULL);
            tm * timePtr = localtime(&t);
            cout << "Car age: " << timePtr->tm_year + 1900 - manufacturing_Year << " years" << endl;
        }

        string engine()
        {
            return "V6";
        }
};

class V8Engine : public CarFeatures
{
    public:
        string color()
        {
            return "Car color is Red";
        }

        double mileage()
        {
            return 20;
        }

        double carPrice()
        {
            return 35000.00;
        }

        void carAge()
        {
            int manufacturing_Year;
            cout << "Enter the car manufacturing year: ";
            cin >> manufacturing_Year;
            time_t t = time(NULL);
            tm * timePtr = localtime(&t);
            cout << "Car age: " << timePtr->tm_year + 1900 - manufacturing_Year << " years" << endl;
        }

        string engine()
        {
            return "V8";
        }
};

class CarFactory
{
    public:
        virtual string carMake() = 0;
        virtual string carModel() = 0; 
        virtual void carInfo() = 0;       
};

class DodgeAvenger : public CarFactory
{   
    CarFeatures * myFeatures;
    public:
        DodgeAvenger(CarFeatures * obj1) : myFeatures(obj1)
        {

        }
        string carMake()
        {
            string make;
            cout << "Enter your car make: ";
            cin >> make;
            return make;
        }
        string carModel()
        {
            string model;
            cout << "Enter your car model: ";
            cin >> model;
            return model;
        }
        void carInfo()
        {
            cout << "Car Mileage: " << myFeatures->mileage() << " miles/hour" << endl;
            cout << "Car Price: " << myFeatures->carPrice() << " USD" << endl;            
            cout << "Car Engine: " << myFeatures->engine() << " Engine" << endl;
        }
};

class Tesla : public CarFactory
{   
    CarFeatures * myFeatures;
    public:
        
        Tesla(CarFeatures * obj1) : myFeatures(obj1)
        {

        }
        string carMake()
        {
            string make;
            cout << "Enter your car make: ";
            cin >> make;
            return make;
        }
        string carModel()
        {
            string model;
            cout << "Enter your car model: ";
            cin >> model;
            return model;
        }

        void carInfo()
        {
            cout << "Car Mileage: " << myFeatures->mileage() << " miles/hour" << endl;
            cout << "Car Price: " << myFeatures->carPrice() << " USD" << endl;
            cout << "Car Engine: " << myFeatures->engine() << " Engine" << endl;
        }
};

void test()
{
    // CarFeatures * car1 = new V6Engine();
    // CarFactory * dodge = new DodgeAvenger(car1);
    // string make = dodge->carMake();
    // string model = dodge->carModel();
    // assert(make != "");
    // assert(model != "");
    // cout << "Test Passed..." << endl;
    V8Engine * test = new V8Engine();
    assert(test->carPrice() > 0);
    assert(test->color() != "");
    assert(test->engine() !="");
    assert(test->mileage() > 0);
    cout << "Test Passed..." << endl;

}

int main(int argc, const char ** argv)
{
    CarFeatures * car1 = new V6Engine();
    CarFactory * dodge = new DodgeAvenger(car1);
    string make = dodge->carMake();
    string model = dodge->carModel();
    cout << make << " " << model << flush;
    cout << endl;
    car1->carAge();
    dodge->carInfo();
    cout << "==================================== " << endl;
    CarFeatures * car2 = new V8Engine();
    CarFactory * tesla = new Tesla(car2);
    make = tesla->carMake();
    model = tesla->carModel();
    cout << make << " " << model << endl;
    car2->carAge();
    tesla->carInfo();

    delete car1;
    delete car2;

    test();
    return 0;   
}