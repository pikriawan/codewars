/**
 * Tanggal: 7 Januari 2026
 * Link: https://www.codewars.com/kata/576bb71bbbcf0951d5000044/train/c
 */

#include <stddef.h>
#include <stdio.h>

void count_positives_sum_negatives(
    const int values[/* count */],
    size_t count,
    int *positives_count,
    int *negatives_sum
) {
    *positives_count = 0;
    *negatives_sum = 0;

    for (int i = 0; i < count; i++) {
        if (values[i] > 0) {
            (*positives_count)++;
        } else if (values[i] < 0) {
            (*negatives_sum) += values[i];
        }
    }
}

int main() {
    int count = 10;
    int values[] = {1, 2, 3, 4, 5, -6, -7, -8, -9, -10};
    int positives_count;
    int *positives_count_ptr = &positives_count;
    int negatives_sum;
    int *negatives_sum_ptr = &negatives_sum;

    count_positives_sum_negatives(values, count, positives_count_ptr, negatives_sum_ptr);

    printf("Positives count: %d\n", positives_count);
    printf("Negatives sum: %d\n", negatives_sum);

    return 0;
}
