/**
 * Tanggal: 27 Februari 2026
 * Link: https://www.codewars.com/kata/5513795bd3fafb56c200049e/train/c
 */

#include <stddef.h>
#include <stdio.h>

void count_by(unsigned x, unsigned n, unsigned result[n]) {
    unsigned i = 0;
    unsigned j = x;

    while (i < n) {
        result[i] = j;
        i++;
        j += x;
    }
}

int main() {
    unsigned x = 1;
    unsigned n = 10;
    unsigned result[n];

    count_by(x, n, result);

    printf("{");

    for (int i = 0; i < n - 1; i++) {
        printf("%u, ", result[i]);
    }

    printf("%u}\n", result[n - 1]);

    return 0;
}
