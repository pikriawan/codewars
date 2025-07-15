/**
 * Tanggal: 15 Juli 2025
 * Link: https://www.codewars.com/kata/55685cd7ad70877c23000102/train/c
 */

#include <stdio.h>

int makeNegative(int num) {
    if (num == 0) {
        return 0;
    } else if (num < 0) {
        return num;
    } else {
        return 0 - num;
    }
}

int main() {
    printf("%d\n", makeNegative(0));
    printf("%d\n", makeNegative(-5));
    printf("%d\n", makeNegative(5));

    return 0;
}
