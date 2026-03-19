/**
 * Tanggal: 19 Maret 2026
 * Link: https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/train/c
 */

#include <stdio.h>

int expression_matter(int a, int b, int c) {
    int results[] = {
        a + b + c,
        a + b * c,
        (a + b) * c,
        a * b + c,
        a * (b + c),
        a * b * c
    };

    int max = results[0];

    for (int i = 1; i < 6; i++) {
        if (results[i] > max) {
            max = results[i];
        }
    }

    return max;
}

int main() {
    printf("%d\n", expression_matter(2, 1, 2));
    printf("%d\n", expression_matter(2, 1, 1));
    printf("%d\n", expression_matter(1, 1, 1));

    return 0;
}
