/**
 * Tanggal: 3 Maret 2026
 * Link: https://www.codewars.com/kata/5a2be17aee1aaefe2a000151/train/c
 */

#include <stddef.h>
#include <stdio.h>

long long arr_plus_arr(const int a[/* na */], const int b[/* nb */], size_t na, size_t nb) {
    long long result = 0;

    int i = 0;

    while (i < na) {
        result += a[i];
        i++;
    }

    int j = i;
    i = 0;
    size_t n = na + nb;

    while (j < n) {
        result += b[i];
        i++;
        j++;
    }

    return result;
}

int main() {
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    size_t na = sizeof(a) / sizeof(a[0]);
    size_t nb = sizeof(b) / sizeof(b[0]);

    long long result = arr_plus_arr(a, b, na, nb);
    printf("%lld\n", result);

    return 0;
}
