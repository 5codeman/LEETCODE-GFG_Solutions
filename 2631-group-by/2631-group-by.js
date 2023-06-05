/**
 * @param {Function} fn
 * @return {Array}
 */
Array.prototype.groupBy = function (fn) {
  let hash = {};
  for (let i = 0; i < this.length; i++) {
    let res = fn(this[i]);
    if (res in hash) {
      hash[res].push(this[i]);
    } else {
      hash[res] = [this[i]];
    }
  }
  return hash;
};


/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */