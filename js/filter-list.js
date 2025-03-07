/**
 * Tanggal: 7/3/2025
 * Link: https://www.codewars.com/kata/53dbd5315a3c69eed20002dd/train/javascript
 */

function filter_list(l) {
    let result = [];

    for (let item of l) {
        if (typeof item === "number") {
            result.push(item);
        }
    }

    return result;
}

console.log(filter_list([1, 2, "a", "b"]));
console.log(filter_list([1, "a", "b", 0, 15]));
console.log(filter_list([1, 2, "aasf", "1", "123", 123]));
