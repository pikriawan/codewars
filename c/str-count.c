/**
 * Tanggal: 5 Januari 2026
 * Link: https://www.codewars.com/kata/5865918c6b569962950002a1/train/c
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t str_count(const char *str, char letter) {
    size_t count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == letter) {
            count++;
        }
    }

    return count;
}

int main() {
    printf("%zu\n", str_count("Hello", 'o'));
    printf("%zu\n", str_count("Hello", 'l'));
    printf("%zu\n", str_count("", 'z'));

    return 0;
}
