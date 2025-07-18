/**
 * Tanggal: 18 Juli 2025
 * Link: https://www.codewars.com/kata/542c0f198e077084c0000c2e/train/c
 */

#include <stdio.h>

int divisors(long long n) {
    int divisors_count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors_count++;
        }
    }

    return divisors_count;
}

int main() {
    printf("%d\n", divisors(1));
    printf("%d\n", divisors(4));
    printf("%d\n", divisors(9));

    return 0;
}
