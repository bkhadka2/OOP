"use strice";

var assert = require('assert');
var chai = require('chai');
var marker = require('../script.js');

var expect = chai.expect;

describe('Vehicle', function() {
    describe('#constructor', function() {
        it('should be started withs the name Vehicle', function() {
            let cname = new script.Vehicle("Vehicle");
            assert.equal("Vehicle", cname.name);
        });
    });
});