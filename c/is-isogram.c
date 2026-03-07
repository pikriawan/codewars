/**
 * Tanggal: 7 Maret 2026
 * Link: https://www.codewars.com/kata/54ba84be607a92aa900000f1/train/c
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

char to_lower(char letter) {
    if (letter >= 65 && letter <= 90) {
        return (char)(letter + 32);
    }

    return letter;
}

bool is_isogram(const char *string) {
    size_t length = strlen(string);

    for (int i = 0; i < length; i++) {
        char letter = to_lower(string[i]);

        for (int j = 0; j < length; j++) {
            if (j == i) {
                continue;
            }

            char compare = to_lower(string[j]);

            if (letter == compare) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    printf("%d\n", is_isogram("Dermatoglyphics"));
    printf("%d\n", is_isogram("aba"));
    printf("%d\n", is_isogram("moOse"));

    return 0;
}
