/**
 * @param {number} n
 * @return {Function} counter
 */

var createCounter = function(n) {
    var c = -1;
    return function() {
        c += 1;
        return c + n;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */