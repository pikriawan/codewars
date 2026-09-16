/**
 * Tanggal: 16 September 2026
 * Link: https://www.codewars.com/kata/56747fd5cb988479af000028/train/javascript
 */

function getMiddle(str) {
    return str.length % 2 === 0
        ? str.charAt(str.length / 2 - 1) + str.charAt(str.length / 2)
        : str.charAt(str.length / 2);
}

console.log(getMiddle("test"));
console.log(getMiddle("testing"));
