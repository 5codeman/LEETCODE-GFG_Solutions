/**
 * @param {Function} fn
 * @param {number} t
 * @return {Function}
 */
var timeLimit = function(fn, t) {
    const endsInTimeT = new Promise((resolve, reject) => {    
        setTimeout(() => {
            reject("Time Limit Exceeded");
        }, t+1);
    });
    
	return async function(...args) {
        const racePromise = Promise.race([endsInTimeT, fn(...args)]);
        return racePromise
                .then((result) => { 
                  return result;
                })
                .catch((error) => {   
                   throw error;
                });
    }
};

/**
 * const limited = timeLimit((t) => new Promise(res => setTimeout(res, t)), 100);
 * limited(150).catch(console.log) // "Time Limit Exceeded" at t=100ms
 */