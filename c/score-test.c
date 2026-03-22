/**
 * Tanggal: 22 Maret 2026
 * Link: https://www.codewars.com/kata/55d2aee99f30dbbf8b000001/train/c
 */

#include <stddef.h>
#include <stdio.h>

int score_test(size_t size, const int tests[size], int right, int omit, int wrong) {
    int score = 0;

    for (int i = 0; i < size; i++) {
        int test = tests[i];

        if (test == 0) {
            score += right;
        } else if (test == 1) {
            score += omit;
        } else if (test == 2) {
            score -= wrong;
        }
    }

    return score;
}

int main() {
    int tests[] = {0, 0, 0, 0, 2, 1, 0};
    size_t size = sizeof(tests) / sizeof(tests[0]);
    int right = 2;
    int omit = 0;
    int wrong = 1;

    int result = score_test(size, tests, right, omit, wrong);
    printf("%d\n", result);

    return 0;
}
