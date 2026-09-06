/**
 * Tanggal: 6 September 2026
 * Link: https://www.codewars.com/kata/559590633066759614000063/train/javascript
 */

function minMax(arr) {
    let min = arr[0];
    let max = arr[0];

    for (const num of arr) {
        if (num < min) {
            min = num;
        }

        if (num > max) {
            max = num;
        }
    }

    return [min, max];
}

console.log(minMax([1, 2, 3, 4, 5]));
