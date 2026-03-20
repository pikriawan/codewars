/**
 * Tanggal: 20 Maret 2026
 * Link: https://www.codewars.com/kata/56747fd5cb988479af000028/train/c
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

char *get_middle(char output[3], const char *input) {
    size_t length = strlen(input);

    if (length % 2 == 0) {
        size_t half_length = length / 2;

        output[0] = input[half_length - 1];
        output[1] = input[half_length];
        output[2] = '\0';
    } else {
        size_t half_length = length / 2;

        output[0] = input[half_length];
        output[1] = '\0';
    }

    return output;
}

int main() {
    char output[3];
    const char input[] = "testing";
    printf("%s\n", get_middle(output, input));

    return 0;
}
