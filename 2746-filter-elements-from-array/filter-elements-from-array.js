/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
    const ans = [];
    arr.forEach((val, idx) => {
        if (fn(val, idx))
            ans.push(val);
    })
    return ans;
};