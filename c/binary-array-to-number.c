/**
 * Tanggal: 6 Maret 2026
 * Link: https://www.codewars.com/kata/578553c3a1b8d5c40300037c/train/c
 */

#include <stddef.h>
#include <stdio.h>

int power(int base, int exp) {
    int result = 1;

    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    return result;
}

unsigned binary_array_to_number(const unsigned bits[/* count */], size_t count) {
    unsigned result = 0;

    int i = count - 1;
    int j = 0;

    while (i >= 0) {
        result += bits[i] * power(2, j);

        i--;
        j++;
    }

    return result;
}

int main() {
    unsigned bits[] = {0, 0, 1, 1};
    size_t count = sizeof(bits) / sizeof(bits[0]);

    unsigned result = binary_array_to_number(bits, count);
    printf("%u\n", result);

    return 0;
}
