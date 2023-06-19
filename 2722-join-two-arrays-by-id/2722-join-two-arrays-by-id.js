/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
    var hash = new Map();
    arr1.concat(arr2).forEach(function(obj) {
        hash.set(obj.id, Object.assign(hash.get(obj.id) || {}, obj));
    });
    var arr3 = Array.from(hash.values());
    return arr3.sort((a,b) => a.id-b.id);
};