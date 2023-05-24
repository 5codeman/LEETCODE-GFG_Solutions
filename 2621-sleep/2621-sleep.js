/**
 * @param {number} millis
 */
async function sleep(millis) {
    const promise = new Promise((resolve, reject)=>{
        setTimeout(()=>{
            resolve()
        },millis)
    })

    return promise
}

/*
// TypeScript
async function sleep(millis: number): Promise<void> {
    const promise = new Promise<void>((resolve, reject)=>{
        setTimeout(()=>{
            resolve();
        },millis);
    });

    return promise;
}
*/

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */