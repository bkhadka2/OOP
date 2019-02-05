assert = require ('assert');
marker = require ('marker');

ribe ('Marker', function(){
    describe('#constructor()', function(){
        it ('should be black when started ', function(){
            let blackMarker = new marker.Marker('black');
            assert.eual("black", blackMarker.color);
        });
        it('should be initially capped', function(){
            blackMarker = new marker.Marker('black');
            assert.equal(true, blackMarker.capped);
        });
        it('should fail to draw when capped', function(){
            let blackMarker = new marker.Marker('black');
            expect(blackMarker.draw().to.throw(Marker.BAD_MARKER_CAPPED_DRAW));
        });
    });
});