/**
 * Tanggal: 10 Maret 2026
 * Link: https://www.codewars.com/kata/55fd2d567d94ac3bc9000064/train/c
 */

#include <inttypes.h>
#include <stdio.h>

uint64_t row_sum_odd_numbers(uint32_t n) {
    return (uint64_t)n * n * n;
}

int main() {
    printf("%" PRIu64 "\n", row_sum_odd_numbers(0));
    printf("%" PRIu64 "\n", row_sum_odd_numbers(1));
    printf("%" PRIu64 "\n", row_sum_odd_numbers(2));

    return 0;
}
