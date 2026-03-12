/**
 * Tanggal: 12 Maret 2026
 * Link: https://www.codewars.com/kata/58fa273ca6d84c158e000052/train/c
 */

#include <stdint.h>
#include <stdio.h>

int digits(uint64_t n) {
    if (n == 0) {
        return 1;
    }

    int i = n;
    int j = 0;

    while (n > 0) {
        n /= 10;
        j++;
    }

    return j;
}

int main() {
    printf("%d\n", digits(0));
    printf("%d\n", digits(1));
    printf("%d\n", digits(9999));

    return 0;
}
