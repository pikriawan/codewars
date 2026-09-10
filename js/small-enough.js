/**
 * Tanggal: 10 September 2026
 * Link: https://www.codewars.com/kata/542c0f198e077084c0000c2e/train/javascript
 */

function smallEnough(array, limit) {
    for (const num of array) {
        if (num > limit) {
            return false;
        }
    }

    return true;
}

console.log(smallEnough([66, 101], 200));
