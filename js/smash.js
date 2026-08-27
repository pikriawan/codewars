/**
 * Tanggal: 27 Agustus 2026
 * Link: https://www.codewars.com/kata/53dc23c68a0c93699800041d/train/javascript
 */

function smash(words) {
    let result = "";

    for (let i = 0; i < words.length - 1; i++) {
        result += words[i] + " ";
    }

    if (words[words.length - 1]) {
        result += words[words.length - 1];
    }

    return result;
}

console.log(smash([]));
console.log(smash(["hello"]));
console.log(smash(["hello", "world"]));
