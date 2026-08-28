/**
 * Tanggal: 28 Agustus 2026
 * Link: https://www.codewars.com/kata/52efefcbcdf57161d4000091/train/javascript
 */

function countCharacters(string) {
    const result = {};

    for (const char of string.split("")) {
        if (result[char] === undefined) {
            result[char] = 0;
        }

        result[char]++;
    }

    return result;
}

console.log(countCharacters("aba"));
