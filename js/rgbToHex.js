/**
 * Tanggal: 5/12/2024
 * Link: https://www.codewars.com/kata/513e08acc600c94f01000001/train/javascript
 */

function decimalToHex(decimal) {
    if (decimal < 0) {
        return "00";
    }

    if (decimal > 255) {
        return "FF";
    }

    const hexChars = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"];

    let i = 0;

    for (let j = 0; j < hexChars.length; j++) {
        for (let k = 0; k < hexChars.length; k++) {
            if (i === decimal) {
                return hexChars[j] + hexChars[k];
            }

            i++;
        }
    }
}

function rgbToHex(r, g, b) {
    return decimalToHex(r) + decimalToHex(g) + decimalToHex(b);
}

console.log(rgbToHex(-1, 255, 255));