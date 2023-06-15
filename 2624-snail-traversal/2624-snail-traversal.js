/**
 * @param {number} rowsCount
 * @param {number} colsCount
 * @return {Array<Array<number>>}
 */
Array.prototype.snail = function(rowsCount, colsCount) {
    if (rowsCount*colsCount !==this.length) return []
    return this.reduce((ans,item,index)=>{
        let col=index%rowsCount;
        let row=Math.floor(index/rowsCount);

        if (row%2!==0){col=rowsCount-col-1 }
        ans[col]=[...(ans[col] || []),item]
        return ans
    },[])

}

/**
 * const arr = [1,2,3,4];
 * arr.snail(1,4); // [[1,2,3,4]]
 */