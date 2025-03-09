/**
 * Tanggal: 9/3/25
 * Link: https://www.codewars.com/kata/546f922b54af40e1e90001da/train/javascript
 */

function alphabetPosition(text) {
    const alphabets = "abcdefghijklmnopqrstuvwxyz";

    return text
        .toLowerCase()
        .split("")
        .map((char) => alphabets.indexOf(char) + 1)
        .filter((index) => index !== 0)
        .join(" ");
}

console.log(alphabetPosition("abc"));
console.log(alphabetPosition("The sunset sets at twelve o' clock."));
console.log(alphabetPosition("The narwhal bacons at midnight."));
