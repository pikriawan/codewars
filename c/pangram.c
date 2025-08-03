/**
 * Tanggal: 3 Agustus 2025
 * Link: https://www.codewars.com/kata/545cedaa9943f7fe7b000048/train/c
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char char_to_lower(char character) {
    if ((int) character < 65 || (int) character > 90) {
        return character;
    }

    return (char) character + 32;
}

char *str_to_lower(const char *str) {
    char *result = calloc(strlen(str) + 1, sizeof(char));

    for (int i = 0; i < strlen(str); i++) {
        result[i] = char_to_lower(str[i]);
    }

    return result;
}

bool str_includes(char character, const char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == character) {
            return true;
        }
    }

    return false;
}

bool is_pangram(const char *str_in) {
    char *str_in_lower = str_to_lower(str_in);
    char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < strlen(alphabets); i++) {
        if (!str_includes(alphabets[i], str_in_lower)) {
            free(str_in_lower);
            return false;
        }
    }

    free(str_in_lower);
    return true;
}

int main() {
    printf("%d\n", is_pangram("The quick brown fox jumps over the lazy dog"));
    printf("%d\n", is_pangram("The quick brown fox jumped over the lazy dog"));

    return 0;
}
