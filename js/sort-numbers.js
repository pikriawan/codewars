/**
 * Tanggal: 18 September 2026
 * Link: https://www.codewars.com/kata/5174a4c0f2769dd8b1000003/train/javascript
 */

function sortNumbers(numbers) {
    if (!numbers) {
        return [];
    }

    const result = numbers;
    result.sort((a, b) => a - b);
    return result;
}

console.log(sortNumbers([1, 2, 10, 50, 5]));
console.log(sortNumbers(null));
