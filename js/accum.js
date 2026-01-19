/**
 * Tanggal: 19 Januari 2026
 * Link: https://www.codewars.com/kata/5667e8f4e3f572a8f2000039/train/javascript
 */

function accum(s) {
    let result = "";

    for (let i = 0; i < s.length; i++) {
        result += s.charAt(i).toUpperCase();

        for (let j = 1; j < i + 1; j++) {
            result += s.charAt(i).toLowerCase();
        }

        if (i !== s.length - 1) {
            result += "-";
        }
    }

    return result;
}

console.log(accum("Zpgln"));
