/**
 * @param {Object} obj
 * @return {Object}
 */
var compactObject = function(obj) {
    const compact = obj => {
        if (Array.isArray(obj)){
            obj = obj.filter(o => !!o);
            for(let i = 0;i < obj.length; ++i) {
                obj[i] = compact(obj[i]);
            }
        }
        else if (obj !== null && typeof obj === 'object') {
            for(const k in obj) {
                if (!obj[k]) {
                    delete obj[k];
                }
                else {
                    obj[k] = compact(obj[k]);
                }
            }
        }
        return obj;
    }
    return compact(obj);
}