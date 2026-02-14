/**
 * Tanggal: 14 Februari 2026
 * Link: https://www.codewars.com/kata/54ff3102c1bad923760001f3/train/c
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t vowel_count(const char *str) {
    char vowels[] = "aiueo";

    size_t count = 0;

    size_t len = strlen(str);

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 5; j++) {
            if (str[i] == vowels[j]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    printf("%zu\n", vowel_count("abracadabra"));

    return 0;
}
