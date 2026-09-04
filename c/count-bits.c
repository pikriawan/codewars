/**
 * Tanggal: ...
 * Link: https://www.codewars.com/kata/526571aae218b8ee490006f4/train/c
 */

#include <stddef.h>
#include <stdio.h>

size_t count_bits(unsigned value) {
    size_t result = 0;

    for (int i = 31; i >= 0; i--) {
        int k = value >> i;

        if (k & 1) {
            result++;
        }
    }

    return result;
}

int main() {
    size_t result = count_bits(1234);
    printf("%zu\n", result);

    return 0;
}
