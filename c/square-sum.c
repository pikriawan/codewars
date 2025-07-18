/**
 * Tanggal: 18 Juli 2025
 * Link: https://www.codewars.com/kata/515e271a311df0350d00000f/train/c
 */

#include <stdio.h>

int square_sum(const int values[], size_t count) {
    int result = 0;

    for (int i = 0; i < count; i++) {
        result += values[i] * values[i];
    }

    return result;
}

int main() {
    int numbers[] = {1, 2, 3};
    printf("%d\n", square_sum(numbers, 3));

    return 0;
}
