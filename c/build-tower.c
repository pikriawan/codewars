/**
 * Tanggal: 2 Maret 2026
 * Link: https://www.codewars.com/kata/576757b1df89ecf5bd00073b/train/c
 */

#include <stdio.h>

void build_tower(unsigned n, char tower[n][2 * n - 1]) {
    for (int i = 0; i < n; i++) {
        int stars_length = 2 * i + 1;
        int spaces_length = (2 * n - 1) - stars_length;

        int j = 0;

        while (j < spaces_length / 2) {
            tower[i][j] = ' ';
            j++;
        }

        while (j < spaces_length / 2 + stars_length) {
            tower[i][j] = '*';
            j++;
        }

        while (j < spaces_length + stars_length) {
            tower[i][j] = ' ';
            j++;
        }
    }
}

int main() {
    unsigned n = 6;
    char tower[n][2 * n - 1];

    build_tower(n, tower);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            printf("%c", tower[i][j]);
        }

        printf("\n");
    }

    return 0;
}
