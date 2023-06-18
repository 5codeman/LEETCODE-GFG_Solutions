var TimeLimitedCache = function() { 
    cacheMap = new Map()
};

/** 
 * @param {number} key
 * @param {number} value
 * @param {number} duration time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */
TimeLimitedCache.prototype.set = function(key, value, duration) {
    let output
    if(cacheMap.has(key)) {
        output=true
        clearTimeout(cacheMap.get(key).timeout)
    }
    else output=false

    let timeout = setTimeout(()=>{cacheMap.delete(key)},duration)
    cacheMap.set(key,{value,timeout})
    return output
};

/** 
 * @param {number} key
 * @return {number} value associated with key
 */
TimeLimitedCache.prototype.get = function(key) {
    if(cacheMap.has(key)) return cacheMap.get(key).value
    return -1
};

/** 
 * @return {number} count of non-expired keys
 */
TimeLimitedCache.prototype.count = function() {
    return cacheMap.size
};

/**
 * Your TimeLimitedCache object will be instantiated and called as such:
 * var obj = new TimeLimitedCache()
 * obj.set(1, 42, 1000); // false
 * obj.get(1) // 42
 * obj.count() // 1
 */