/**
 * Tanggal: 19 September 2026
 * Link: https://www.codewars.com/kata/546e2562b03326a88e000020/train/javascript
 */

function squareDigits(num) {
    return parseInt(num
        .toString()
        .split("")
        .map((d) => parseInt(d) * parseInt(d))
        .join(""));
}

console.log(squareDigits(9119));
