class Vehicle
{
    constructor(name, year, cost)
    {
        this.name = name;
        this.year = year;
        this.cost = cost;
    }

    calculateAgeOfTheVehicle()
    {
        var age = new Date().getFullYear() - this.year;
        this.age = age;
    }

    printInformationOnVehicle()
    {
        console.log("The name of the car is: " + this.name);
        console.log("The age of the car is: " + this.age);
        console.log(`The car was bought is USD ${this.cost}`);
    }

    static greeting()
    {
        console.log("Information on Vehicles");
        console.log("===========================");
    }
}
Vehicle.greeting();
const Dodge = new Vehicle("Dodge Avenger", 2010, 11000);
Dodge.calculateAgeOfTheVehicle();
Dodge.printInformationOnVehicle();


class Bus extends Vehicle 
{
    constructor(name, year, cost, numberOfPassengerThatCanFit, isElectric, mileage)
    {
        super(name, year, cost);
        this.numberOfPassengerThatCanFit = numberOfPassengerThatCanFit;
        this.isElectric = isElectric;
        this.mileage = mileage;
    }

    busCapacity(maxPassenger)
    {
        if(this.isElectric)
        {
            maxPassenger = this.numberOfPassengerThatCanFit + 5;
            this.numberOfPassengerThatCanFit = maxPassenger;
            this.mileage = 45;
        
        }
        else
        {
            maxPassenger = this.numberOfPassengerThatCanFit + 10;
            this.numberOfPassengerThatCanFit = maxPassenger;
            this.mileage = 35;
        }
       
    }

    display()
    {
        console.log("The name of the Bus is: " + this.name);
        console.log("The age of the Bus is: " + this.age);
        console.log("The cost of the Bus is: " + this.cost);
        console.log("The max Passenger capacity of the Bus is: " + this.numberOfPassengerThatCanFit);
        console.log("Electric? " + this.isElectric);
        console.log("The mileage of the Bus is: " + this.mileage);
    }
}

const obj = new Bus("Toyota", 2008, 35000, 10,true, 20);
obj.busCapacity(10);
obj.calculateAgeOfTheVehicle();
obj.display();