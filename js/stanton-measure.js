/**
 * Tanggal: 7 September 2026
 * Link: https://www.codewars.com/kata/59a1cdde9f922b83ee00003b/train/javascript
 */

function stantonMeasure(arr) {
    let oneLength = 0;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === 1) {
            oneLength++;
        }
    }

    let nLength = 0;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === oneLength) {
            nLength++;
        }
    }

    return nLength;
}

console.log(stantonMeasure([1, 4, 3, 2, 1, 2, 3, 2]));
