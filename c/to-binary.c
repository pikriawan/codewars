/**
 * Tanggal: 11 Maret 2026
 * Link: https://www.codewars.com/kata/59fca81a5712f9fa4700159a/train/c
 */

#include <stdio.h>

unsigned long long to_binary(unsigned short num) {
    unsigned long long remaining = num;
    unsigned long long result = 0;
    unsigned long long multiplier = 1;

    while (remaining > 0) {
        result += remaining % 2 * multiplier;
        remaining /= 2;
        multiplier *= 10;
    }

    return result;
}

int main() {
    printf("%llu\n", to_binary(65535));

    return 0;
}
