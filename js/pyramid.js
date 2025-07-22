/**
 * Tanggal: 23 Juli 2025
 * Link: https://www.codewars.com/kata/515f51d438015969f7000013/train/javascript
 */

function pyramid(n) {
    return new Array(n).fill().map((_, i) => new Array(i + 1).fill(1));
}

console.log(pyramid(5));
