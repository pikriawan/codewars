/**
 * Tanggal: 17/3/25
 * Link: https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/javascript
 */

function reverseWords(str) {
    return str
        .split(" ")
        .map((word) => word.split("").reverse().join(""))
        .join(" ");
}

console.log(reverseWords("The quick brown fox jumps over the lazy dog."));
