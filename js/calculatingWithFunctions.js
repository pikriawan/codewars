/**
 * Tanggal: 12/02/2025
 * Link: https://www.codewars.com/kata/525f3eda17c7cd9f9e000b39/train/javascript
 */

function createNumber(number) {
    return function(operator) {
        if (operator) {
            let result = 0;

            switch (operator.name) {
                case "plus":
                    result = number + operator.target;
                    break;
                case "minus":
                    result = number - operator.target;
                    break;
                case "times":
                    result = number * operator.target;
                    break;
                case "dividedBy":
                    result = number / operator.target;
            }

            return Math.floor(result);
        }

        return number;
    }
}

function createOperator(name) {
    return function(target) {
        return { name, target };
    }
}

const zero = createNumber(0);
const one = createNumber(1);
const two = createNumber(2);
const three = createNumber(3);
const four = createNumber(4);
const five = createNumber(5);
const six = createNumber(6);
const seven = createNumber(7);
const eight = createNumber(8);
const nine = createNumber(9);


const plus = createOperator("plus");
const minus = createOperator("minus");
const times = createOperator("times");
const dividedBy = createOperator("dividedBy");

console.log(two(plus(two())));
console.log(two(minus(one())));
console.log(eight(times(nine())));
console.log(seven(dividedBy(three())));
