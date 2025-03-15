/**
 * Tanggal: 15/3/25
 * Link: https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/javascript
 */

function moveZeros(arr) {
    const zerosLength = arr.filter((item) => item === 0).length;
    return [
        ...arr.filter((item) => item !== 0),
        ...new Array(zerosLength).fill(0)
    ];
}

console.log(moveZeros([1, 2, 0, 1, 0, 1, 0, 3, 0, 1]));
