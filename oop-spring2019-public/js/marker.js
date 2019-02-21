"use strict";

class BadMarkerState {
    constructor(problem) {
        this.problem=problem;
    }
}

//abstract 
class writingUtensil
{
    constructor(color) {
        console.log("constructing writing utensil");
        this._color = color;
    }

    //abstract
    write() {
        throw new Error("Write is abstract");
    }

    get color() {
        return this._color;
    }

    get capped() {
        return this._capped;
    }

    set capped(value) {
        if (typeof value == "boolean") {
            this._capped = value;
        } else {
            throw Marker.BAD_MARKER_CAPPED_INVALID;
        }
    }

}

class Marker extends writingUtensil{
    constructor(color) {
        super(color);
        console.log("constructing marker");
        this._capped = true;
    }
    // changing the definition (override) since we are making some change in write() method in Marker.
    // Not an override if you use different method in derived classes than that of base classes.
    write() {
        if (!this._capped) {
           console.log("writing in " + this.color);
        } else {
            throw Marker.BAD_MARKER_CAPPED_DRAW;
        }
    }

    get color() {
        return this._color;
    }

    get capped() {
        return this._capped;
    }

    set capped(value) {
        if (typeof value == "boolean") {
            this._capped = value;
        } else {
            throw Marker.BAD_MARKER_CAPPED_INVALID;
        }
    }
}

Marker.BAD_MARKER_CAPPED_DRAW = new BadMarkerState("drawing with capped marker is bad");
Marker.BAD_MARKER_CAPPED_INVALID = new BadMarkerState("capped must be true or false");


exports.Marker = Marker;
exports.BadMarkerState = BadMarkerState;
