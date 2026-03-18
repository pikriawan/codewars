/**
 * Tanggal: 18 Maret 2026
 * Link: https://www.codewars.com/kata/5a00e05cc374cb34d100000d/train/c
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

unsigned short *reversed_sequence(unsigned short num) {
    unsigned short *result = malloc(num * sizeof(num));

    for (unsigned short i = 0; i < num; i++) {
        result[i] = num - i;
    }

    return result;
}

int main() {
    unsigned short num = 5;
    unsigned short *result = reversed_sequence(num);

    for (int i = 0; i < num; i++) {
        printf("%hu\n", result[i]);
    }

    return 0;
}
