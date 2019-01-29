"use strict";

class Marker
{
    constructor(color)
    {
        console.log("Constructor called...");
        this._color = color;
    }

    draw()
    {
        console.log("drawing in "+ this._color);
    }

    get color()
    {
        return this._color;
    }

    set color(value)
    {
        this._color = value;
    }
}

var blackMarker = new Marker("black");
var redMarker = new Marker ("red");

blackMarker.draw();//bad idea
redMarker.draw();


