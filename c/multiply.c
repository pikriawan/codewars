/**
 * Tanggal: 1 November 2025
 * Link: https://www.codewars.com/kata/50654ddff44f800200000004/train/c
 */

#include <stdio.h>

int multiply(int a, int b) {
    int result = 0;

    for (int i = 0; i < b; i++) {
        result += a;
    }

    return result;
}

int main() {
    printf("Result: %d\n", multiply(9, 8));

    return 0;
}
