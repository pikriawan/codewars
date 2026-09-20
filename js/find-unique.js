/**
 * Tanggal: 20 September 2026
 * Link: https://www.codewars.com/kata/585d7d5adb20cf33cb000235/train/javascript
 */

function count(item, arr) {
    let result = 0;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === item) {
            result++;
        }
    }

    return result;
}

function findUnique(arr) {
    const a = arr[0];
    let b = arr[1];

    let i = 2;

    while (a === b) {
        b = arr[i];
        i++;
    }

    if (count(a, arr) === 1) {
        return a;
    }

    return b;
}

console.log(findUnique([0, 1, 0]));
