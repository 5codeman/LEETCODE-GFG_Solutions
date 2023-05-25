/**
 * @param {Function} fn
 */

function memoize(fn) {
    var cache = [];

    return function(...args) {       
        var key = args.join("-").toString();

        if(cache[`${key}`] != undefined ){
            return cache[`${key}`];
        }

        return cache[`${key}`] = Number(fn(...args));
    }
}
