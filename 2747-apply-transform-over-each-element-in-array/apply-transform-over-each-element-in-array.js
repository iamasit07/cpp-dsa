/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function (arr, fn) {
    const ans = [];
    arr.forEach((val, idx) => {
        ans.push(fn(val, idx));
    })

    return ans;
};