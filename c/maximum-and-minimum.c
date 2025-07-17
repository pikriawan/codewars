/**
 * Tanggal: 17 Juli 2025
 * Link: https://www.codewars.com/kata/577a98a6ae28071780000989/train/c
 */

#include <stdio.h>

int max(int *array, int arrayLength) {
    int result = array[0];

    for (int i = 1; i < arrayLength; i++) {
        if (array[i] > result) {
            result = array[i];
        }
    }

    return result;
}

int min(int *array, int arrayLength) {
    int result = array[0];

    for (int i = 1; i < arrayLength; i++) {
        if (array[i] < result) {
            result = array[i];
        }
    }

    return result;
}

int main() {
    int array[] = {2, 4, 9, 5, 7};

    printf("array = {");

    for (int i = 0; i < 4; i++) {
        printf("%d, ", array[i]);
    }

    printf("%d}\n", array[5]);

    printf("maximum = %d\n", max(array, 5));
    printf("minimum = %d\n", min(array, 5));

    return 0;
}
