/**
 * Tanggal: 13 Mei 2026
 * Link: https://www.codewars.com/kata/52fba66badcd10859f00097e/train/c
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool includes(const char *str, char chr) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == chr) {
            return true;
        }
    }

    return false;
}

char *disemvowel(const char *str) {
    size_t len = strlen(str);
    char *result = malloc(len + 1);

    const char vowels[] = "aeiouAEIOU";

    int i = 0;
    int j = 0;

    while (i < len) {
        if (!includes(vowels, str[i])) {
            result[j] = str[i];
            j++;
        }

        i++;
    }

    result[j] = '\0';

    return result;
}

int main() {
    char *result = disemvowel("This website is for losers LOL!");

    printf("%s\n", result);

    free(result);

    return 0;
}
