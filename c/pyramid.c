/**
 * Tanggal: 28 Juli 2025
 * Link: https://www.codewars.com/kata/515f51d438015969f7000013/train/c
 */

#include <stddef.h>
#include <stdlib.h>

int get_pyramid_size(int n) {
    if (n == 0) {
        return 0;
    }

    return n + get_pyramid_size(n - 1);
}

int **pyramid(unsigned n) {
    int **result = calloc(get_pyramid_size(n), sizeof(int));

    for (int i = 0; i < n; i++) {
        result[i] = calloc(n, sizeof(int));

        for (int j = 0; j <= i; j++) {
            result[i][j] = 1;
        }
    }

    return result;
}

void free_pyramid(unsigned n, int *pyramid_array[n]) {
    for (int i = 0; i < n; i++) {
        free(pyramid_array[i]);
    }

    free(pyramid_array);
}

int main() {
    int **pyramid1 = pyramid(3);
    free_pyramid(3, pyramid1);

    return 0;
}
