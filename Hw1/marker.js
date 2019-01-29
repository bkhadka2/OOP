"use strict";

//using unit test...

class BadMarkerState
{
    constructor(problem){
        this._problem = problem;
    }
}
class Marker
{
    constructor(color)
    {
        console.log("Constructor called...");
        this._color = color;
    }

    draw()
    {
        if(! this._capped)
        {
            console.log("drawing in "+ this._color);
        }
        else
        {
            throw new BadMarkerState("drawing with capped marker is bad");
        }
         
    }

    get color()
    {
        return this._color;
    }

    set color(value)
    {
        this._color = value;
    }

    get capped()
    {
        return this._capped;
    }
    
    set capped(value)
    {
        if(typeof value =="boolean")
        {
            this._capped = value;
        }
        else
        {
            throw new BadMarkerState("Capped must be true or false");
        }
    }
}

class MarkerTest
{
    blackMarker(){return new Marker("black");}
    redMarker(){return new Marker("red");}

    testDrawCappedBad()
    {
        var ok = false;
        try
        {
            var black = this.blackMarker();
            black.draw();
        }
        catch(err)
        {
            ok = true;
        }
        if(!ok)
        {
            throw "bad";
        }        
    }

    testDrawUncappedOk()
    {
        var red = this.redMarker();
        red.capped = false;
        red.draw();
    }

    testBlackMarkerIsBlack()
    {
        var black = this.blackMarker();
        if(black.color !== "black")
        {
            throw "bad";
        }
    }

    testAll()
    {
        this.testBlackMarkerIsBlack();
        this.testDrawCappedBad();
        this.testDrawUncappedOk();
    }
}


var testMarker = new MarkerTest();
testMarker.testAll();
/*
var blackMarker = new Marker("black");
var redMarker = new Marker ("red");

blackMarker.draw();//bad idea
redMarker.capped = false;
redMarker.draw();


console.log('I have a ' + blackMarker.color + 'Marker');
*/






