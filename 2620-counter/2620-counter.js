/**
 * @param {number} n
 * @return {Function} counter
 */
let store;
var createCounter = function(n) {
    store = n - 1;
    return function() {
        store++;
        return store;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */