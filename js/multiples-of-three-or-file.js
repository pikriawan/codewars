/**
 * Tanggal: 8 September 2026
 * Link: https://www.codewars.com/kata/514b92a657cdc65150000006/train/javascript
 */

function multiplesOfThreeOrFive(number) {
    let sum = 0;

    for (let i = number - 1; i > 0; i--) {
        if (i % 3 === 0 || i % 5 === 0) {
            sum += i;
        }
    }

    return sum;
}

console.log(multiplesOfThreeOrFive(10));
