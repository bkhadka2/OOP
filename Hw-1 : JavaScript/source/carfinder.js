const readline = require("readline-sync");

var response = true;
var price;

class ErrorIsBad
{
    constructor(problem)
    {
        this.problem = problem;
    }
};

function sleep(milliseconds) 
{
    var start = new Date().getTime();
    for (var i = 0; i < 1e7; i++)
    {
        if ((new Date().getTime() - start) > milliseconds)
        {
            break;
        }
    }
}

function programLoader()
{
    for(var i = 0; i < 5; ++i)
    {
        sleep(1000);
        console.log("...");
    }
    console.log("Program Loaded successfully...");
    console.log("==============================================");
}

function calculations()
{
    console.log("=======================================================");
            console.log(`current car value for this car is: ${price} US Dollar`);
            console.log(`Store discount is:                 ${20}%`);
            var currentValue = price;
            var discountPercent = 20;
            var tax = 5.75;
            var taxAmount = tax/100*currentValue;
            console.log(`Tax amount is:                     ${taxAmount} US Dollar`);
            var totalPrice;
            totalPrice = (currentValue-(discountPercent/100*currentValue))+taxAmount;
            console.log(`The total price of the car is:     ${totalPrice} US Dollar`);
            console.log("=======================================================");
}
class CarFinder
{

    constructor(name)
    {
        this.name = name;
    }

    Options()
    {        
        console.log("Loading the program");
        programLoader();
        var choice;
        console.log("1. Display all the cars name in our showroom");
        console.log("2. Know more about us");
        console.log("3. Our contact information");
        console.log("4. Exit the program");
        console.log("==============================================");
        choice = readline.question("Please make a choice from 1 to 4: ");
        //console.log(choice);
        var newChoice = parseInt(choice);
        switch(newChoice)
        {
            case 1: 
                console.log("a. Dodge Avenger 2014");
                console.log("b. Lamborghini Hurricane 2018");
                console.log("c. Buggati");
                console.log("d. Tesla model 3");
                break;
            case 2:
                console.log("We are Manchester Showroom..");
                break;
            case 3:
                console.log("Our email : bishal@gmail.com");
                break;
            case 4:
                response = false;
                console.log("Exiting the program in...")
                sleep(1000);
                console.log("3...");
                sleep(1000);
                console.log("2...");
                sleep(1000);
                console.log("1...");
                sleep(1000);
                console.log("Sad to say you Bye...");
                break;
            default:
                response = false;
                console.log("No selection was made...");                
        }
    }

    priceCalculator(name)
    {
        name = readline.question("Type the MAKE of the car you want to buy: ")
        if(name == "Dodge")
        {
            price = 15000;
            calculations();
        }
        else if(name == "Lamborghini")
        {
            price = 261274;
            calculations();
        }
        else if(name == "Bugati")
        {
            price = 170000;
            calculations();
        }
        else if(name == "Tesla")
        {
            price = 42900;
            calculations();
        }
        else
        {
            throw CarFinder.badNameChoosen;
        }
        
        
    }
};

//objects in javascripts
CarFinder.badNameChoosen = new ErrorIsBad("Do not mess with the name of the car");
exports.CarFinder = CarFinder;
exports.ErrorIsBad = ErrorIsBad;
const obj = new CarFinder();
obj.Options();
if(response)
    obj.priceCalculator();

