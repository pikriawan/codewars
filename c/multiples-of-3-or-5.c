/**
 * Tanggal: 23 Oktober 2025
 * Link: https://www.codewars.com/kata/514b92a657cdc65150000006/train/c
 */

#include <stdio.h>

int sum_of_multiples_of_3_or_5(int number) {
    if (number < 0) {
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < number; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    printf("%d\n", sum_of_multiples_of_3_or_5(10));
    printf("%d\n", sum_of_multiples_of_3_or_5(-5));
    printf("%d\n", sum_of_multiples_of_3_or_5(98));

    return 0;
}
