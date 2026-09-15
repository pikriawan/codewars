/**
 * Tanggal: 15 September 2026
 * Link: https://www.codewars.com/kata/5412509bd436bd33920011bc/train/javascript
 */

function maskify(str) {
    let result = "";
    let i = 0;

    for (let j = str.length - 1; j >= 0; j--) {
        result += i < 4 ? str[j] : "#";
        i++;
    }

    return result.split("").reverse().join("");
}

console.log(maskify("0123456789"));
