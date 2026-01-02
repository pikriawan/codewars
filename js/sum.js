/**
 * Tanggal: 2 Januari 2026
 * Link: https://www.codewars.com/kata/53dc54212259ed3d4f00071c/train/javascript
 */

function sum(numbers) {
    return numbers.length && numbers.reduce((a, b) => a + b);
}

console.log(sum([1, 2, 3]));
console.log(sum([]));
