/**
 * Tanggal: 21 Maret 2026
 * Link: https://www.codewars.com/kata/5ab6538b379d20ad880000ab/train/c
 */

#include <stdio.h>

int area_or_perimeter(int l, int w) {
    if (l == w) {
        return l * w;
    }

    return 2 * l + 2 * w;
}

int main() {
    printf("%d\n", area_or_perimeter(3, 3));
    printf("%d\n", area_or_perimeter(6, 10));

    return 0;
}
