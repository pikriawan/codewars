/**
 * Tanggal: 10/3/25
 * Link: https://www.codewars.com/kata/55c45be3b2079eccff00010f/train/javascript
 */

function parseNum(text) {
    return text
        .split("")
        .filter((char) => !isNaN(char))
        .at(0);
}

function order(words) {
    return words
        .split(" ")
        .sort((a, b) => {
            const numA = parseNum(a);
            const numB = parseNum(b);

            return numA - numB;
        })
        .join(" ");
}

console.log(order("Thi4s i2s a1 t3ext"));
