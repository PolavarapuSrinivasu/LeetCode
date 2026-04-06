/**
 * @param {string} s
 * @return {boolean}
 */
var halvesAreAlike = function (s) {
    let size = s.length / 2;

    let vowelCount = function (ch) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            return true;
        }
        else {
            return false;
        }
    };

    let c1 = 0;
    for (let i = 0; i < size; i++) {
        if (vowelCount(s[i])) c1++;
    }

    let c2 = 0;
    for (let i = size; i < s.length; i++) {
        if (vowelCount(s[i])) c2++;
    }

    if (c1 == c2) return "alike";
    else return false;
};