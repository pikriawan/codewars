/**
 * Tanggal: 29 Januari 2026
 * Link: https://www.codewars.com/kata/57eadb7ecd143f4c9c0000a3/train/javascript
 */

function abbrevName(name) {
    return name
        .split(" ")
        .map((word) => word.charAt(0).toUpperCase())
        .join(".");
}

console.log(abbrevName("Sam Harris"));
console.log(abbrevName("Patrick Feenan"));
console.log(abbrevName("Evan Cole"));
