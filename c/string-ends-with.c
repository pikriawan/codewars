/**
 * Tanggal: 7 Februari 2026
 * Link: https://www.codewars.com/kata/51f2d1cafc9c0f745c00037d/train/c
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

bool string_ends_with(const char *string, const char *ending) {
    size_t string_length = strlen(string);
    size_t ending_length = strlen(ending);

    if (string_length < ending_length) {
        return false;
    }

    bool result = true;
    int i = string_length;
    int j = ending_length;

    while (j >= 0) {
        if (string[i] != ending[j]) {
            result = false;
        }

        i--;
        j--;
    }

    return result;
}

int main() {
    char string[] = "abc";
    char ending[] = "bc";

    printf("%d\n", string_ends_with(string, ending));

    return 0;
}
