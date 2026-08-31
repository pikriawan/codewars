/**
 * Tanggal: 31 Agustus 2026
 * Link: https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec/train/javascript
 */

function persistence(num) {
    let remaining = num.toString();
    let result = 0;

    while (remaining.length > 1) {
        result++;
        remaining = remaining
            .split("")
            .map((n) => parseInt(n))
            .reduce((acc, cur) => acc * cur)
            .toString();
    }

    return result;
}

console.log(persistence(39));
