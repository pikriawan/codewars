/**
 * Tanggal: 12/12/2024
 * Link: https://www.codewars.com/kata/554b4ac871d6813a03000035/train/javascript
 */

function highAndLow(numbers) {
    numbers = numbers.split(" ").map((n) => parseInt(n));
    numbers.sort((a, b) => a - b);
    return `${numbers.at(-1)} ${numbers[0]}`;
}

console.log(highAndLow("5 4 78 33 100"));
