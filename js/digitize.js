/**
 * Tanggal: 12 Januari 2026
 * Link: https://www.codewars.com/kata/5583090cbe83f4fd8c000051/train/javascript
 */

function digitize(n) {
    return n
        .toString()
        .split("")
        .reverse()
        .map((n) => parseInt(n));
}

console.log(digitize(12345));
console.log(digitize(0));
