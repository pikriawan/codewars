/**
 * Tanggal: 6 Januari 2026
 * Link: https://www.codewars.com/kata/58f8a3a27a5c28d92e000144/train/c
 */

#include <stdbool.h>
#include <stdio.h>

bool first_non_consecutive(const int arr[], int length, int *first) {
    for (int i = 0; i < length - 1; i++) {
        if (arr[i + 1] - arr[i] > 1) {
            *first = arr[i + 1];
            return true;
        }
    }

    return false;
}

int main() {
    int length = 7;
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int first = 0;
    int *first_ptr = &first;
    printf("%d\n", first_non_consecutive(arr, length, first_ptr));
    printf("first non consecutive: %d\n", *first_ptr);

    return 0;
}
