/**
 * Tanggal: 15 Oktober 2026
 * Link: https://www.codewars.com/kata/54bf85e3d5b56c7a05000cf9/train/javascript
 */

function lineNumber(array) {
    return array.map((line, i) => `${i + 1}: ${line}`);
}

console.log(lineNumber(["a", "b", "c"]));
