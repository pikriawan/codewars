/**
 * Tanggal: 11 Februari 2026
 * Link: https://www.codewars.com/kata/57eae65a4321032ce000002d/train/c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fake_binary(const char *digits, char *binary) {
    int digits_length = strlen(digits);

    for (int i = 0; i < digits_length; i++) {
        int digit = digits[i] - 48;

        if (digit < 5) {
            binary[i] = '0';
        } else {
            binary[i] = '1';
        }
    }

    binary[digits_length] = '\0';
}

int main() {
    char digits[] = "1992";
    char *binary = (char *) malloc(5 * sizeof(char));

    fake_binary(digits, binary);

    printf("%s\n", digits);
    printf("%s\n", binary);

    free(binary);

    return 0;
}
