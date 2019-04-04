"use strict";

const assert = require("chai").assert;
const carfinder = require("../carfinder");
describe('CarFinder', function(){
    describe('#constructor()', function(){
        it("CarFinder should output Dodge", function(){
            let cName = new carfinder.CarFinder("Dodge");
            assert.equal('Dodge', cName.name);  
        })
    })

})