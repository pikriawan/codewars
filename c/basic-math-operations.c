/**
 * Tanggal: 16 Juni 2025
 * Link: https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/c
 */

#include <stdio.h>

int basic_op(char op, int value1, int value2) {
    switch (op) {
        case '+':
            return value1 + value2;
        case '-':
            return value1 - value2;
        case '*':
            return value1 * value2;
        case '/':
            return value1 / value2;
    }
}

int main() {
    printf("%d\n", basic_op('+', 4, 7));
    printf("%d\n", basic_op('-', 15, 18));
    printf("%d\n", basic_op('*', 5, 5));
    printf("%d\n", basic_op('/', 49, 7));

    return 0;
}
