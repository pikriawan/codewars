/**
 * Tanggal: 16 Juli 2025
 * Link: https://www.codewars.com/kata/57f781872e3d8ca2a000007e/train/c
 */

#include <stdio.h>
#include <stdlib.h>

int *maps(const int *arr, size_t size) {
    int *result = malloc(size * sizeof(*arr));

    for (int i = 0; i < size; i++) {
        result[i] = arr[i] * 2;
    }

    return result;
}

int main() {
    int nums[] = {1, 2, 3};
    int *result = maps(nums, sizeof(nums) / sizeof(nums[0]));

    for (int i = 0; i < 3; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}
