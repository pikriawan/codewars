/**
 * Tanggal: 5 Februari 2026
 * Link: https://www.codewars.com/kata/53da6d8d112bd1a0dc00008b/train/c
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int *reverse_list(const int *numbers, size_t length) {
    int *result = (int *) malloc(sizeof(int) * length);

    for (int i = 0; i < length; i++) {
        result[length - 1 - i] = numbers[i];
    }

    return result;
}

int main() {
    const int numbers[] = {1, 2, 3, 4, 5};
    size_t length = 5;

    int *result = reverse_list(numbers, length);

    for (int i = 0; i < length; i++) {
        printf("%d\n", result[i]);
    }

    free(result);

    return 0;
}
