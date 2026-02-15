/**
 * Tanggal: 15 Februari 2026
 * Link: https://www.codewars.com/kata/5a8d1c82373c2e099d0000ac/train/c
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse_between(char *string, size_t a, size_t b) {
    size_t length = strlen(string);

    char *original = (char *)malloc(length + 1);
    strcpy(original, string);

    int final_b = b;

    if (final_b > length - 1) {
        final_b = length - 1;
    }

    int a_counter = a;
    int b_counter = final_b;

    while (a_counter <= final_b) {
        string[a_counter] = original[b_counter];
        a_counter++;
        b_counter--;
    }

    free(original);

    return string;
}

int main() {
    char string[] = "codingIsFun";
    reverse_between(string, 2, 100);

    printf("%s\n", string);

    return 0;
}
