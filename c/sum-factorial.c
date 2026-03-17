/**
 * Tanggal: 17 Maret 2026
 * Link: https://www.codewars.com/kata/56b0f6243196b9d42d000034/train/c
 */

#include <stddef.h>
#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

unsigned long long sum_factorial(size_t size, const int array[size]) {
    unsigned long long result = 0;

    for (int i = 0; i < size; i++) {
        result += factorial(array[i]);
    }

    return result;
}

int main() {
    const int array[] = {1, 2, 3};
    size_t size = sizeof(array) / sizeof(array[0]);

    unsigned long long result = sum_factorial(size, array);
    printf("%llu\n", result);

    return 0;
}
