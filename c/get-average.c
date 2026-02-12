/**
 * Tanggal: 12 Februari 2026
 * Link: https://www.codewars.com/kata/563e320cee5dddcf77000158/train/c
 */

#include <stddef.h>
#include <stdio.h>

int get_average(const int *marks, size_t count) {
    int total = 0;

    for (int i = 0; i < count; i++) {
        total += marks[i];
    }

    return (int) (total / count);
}

int main() {
    size_t count = 5;
    int marks[] = {9, 8, 9, 7, 6};

    printf("%d\n", get_average(marks, count));

    return 0;
}
