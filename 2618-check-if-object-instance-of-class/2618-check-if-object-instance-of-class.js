/**
 * @param {any} obj
 * @param {any} classFunction
 * @return {boolean}
 */
var checkIfInstanceOf = function(obj, classFunction) {
    if (obj === null || obj === undefined || !classFunction) {
        return false;
    }

    let kq = Object.getPrototypeOf(obj) === classFunction.prototype;
    let currentClass = obj.__proto__;

    while (!kq  && currentClass && Object.getPrototypeOf(currentClass)) {
        if (Object.getPrototypeOf(currentClass) === classFunction.prototype) {
            kq = true;
        } else {
            currentClass = currentClass.__proto__;
        }
    }

    return kq;
};

/**
 * checkIfInstanceOf(new Date(), Date); // true
 */
