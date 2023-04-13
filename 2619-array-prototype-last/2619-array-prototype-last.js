Array.prototype.last = function() {
    let len = this.length;
    if(len === 0) return -1;
    
    return this[len-1];
    
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */