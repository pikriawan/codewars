/**
 * Tanggal: 26 Februari 2026
 * Link: https://www.codewars.com/kata/57f780909f7e8e3183000078/train/c
 */

#include <stddef.h>
#include <stdio.h>

int grow(size_t size, const int arr[size]) {
    int result = 1;

    for (int i = 0; i < size; i++) {
        result *= arr[i];
    }

    return result;
}

int main() {
    const int arr[] = {1, 2, 3, 4};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", grow(size, arr));

    return 0;
}
