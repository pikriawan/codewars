/**
 * Tanggal: 5 Maret 2026
 * Link: https://www.codewars.com/kata/557cd6882bfa3c8a9f0000c1/train/c
 */

#include <stdio.h>

int get_age(const char *input_string) {
    return (int)(input_string[0]) - 48;
}

int main() {
    printf("%d\n", get_age("5 years old"));
    printf("%d\n", get_age("1 years old"));
    printf("%d\n", get_age("9 years old"));

    return 0;
}
