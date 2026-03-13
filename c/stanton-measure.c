/**
 * Tanggal: 13 Maret 2026
 * Link: https://www.codewars.com/kata/59a1cdde9f922b83ee00003b/train/c
 */

#include <stddef.h>
#include <stdio.h>

unsigned stanton_measure(size_t length, const unsigned array[length]) {
    int one_length = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] == 1) {
            one_length++;
        }
    }

    int n_length = 0;

    for (int i = 0; i < length; i++) {
        if (array[i] == one_length) {
            n_length++;
        }
    }

    return n_length;
}

int main() {
    const unsigned array[] = {1, 2, 3, 4, 1, 2, 3, 4};
    size_t length = sizeof(array) / sizeof(array[0]);

    unsigned result = stanton_measure(length, array);
    printf("%u\n", result);

    return 0;
}
