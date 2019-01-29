"use strict";
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

var blackMarker = new Marker("black");
var redMarker = new Marker ("red");

blackMarker.draw();//bad idea
redMarker.draw();

redMarker.capped = false;
console.log('I have a ' + blackMarker.color + 'Marker');




