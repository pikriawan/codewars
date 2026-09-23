/**
 * Tanggal: 23 September 2026
 * Link: https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad/train/javascript
 */

function invert(numbers) {
    return numbers.map((n) => 0 - n);
}

console.log(invert([1, -2, 3, -4, 5]));
