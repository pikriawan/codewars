/**
 * Tanggal: 15 Maret 2026
 * Link: https://www.codewars.com/kata/55cbd4ba903825f7970000f5/train/c
 */

#include <stdio.h>

char get_grade(int a, int b, int c) {
    int final_score = (a + b + c) / 3;

    if (final_score >= 90) {
        return 'A';
    } else if (final_score >= 80) {
        return 'B';
    } else if (final_score >= 70) {
        return 'C';
    } else if (final_score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    printf("%c\n", get_grade(90, 90, 90));
    printf("%c\n", get_grade(80, 80, 80));
    printf("%c\n", get_grade(70, 70, 70));

    return 0;
}
