/**
 * Tanggal: 27 Januari 2026
 * Link: https://www.codewars.com/kata/56b1f01c247c01db92000076/train/c
 */

#include <stdio.h>
#include <string.h>

char *double_char(const char *string, char *doubled) {
    size_t len = strlen(string);

    for (int i = 0; i < len; i++) {
        doubled[i * 2]     = string[i];
        doubled[i * 2 + 1] = string[i];
    }

    doubled[len * 2] = '\0';

    return doubled;
}

int main() {
    char string[] = "Adidas";
    char doubled[13];

    double_char(string, doubled);

    printf("%s\n", doubled);

    return 0;
}
