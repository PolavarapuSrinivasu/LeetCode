/**
 * @param {string} s
 * @return {number}
 */
var reverseDegree = function (s) {
    let pro = 0;

    for (let i = 0; i < s.length; i++) {
        let val = 26 - (s.charCodeAt(i) - 'a'.charCodeAt(0));
        pro = pro + (i + 1) * val;
    }

    return pro;
};