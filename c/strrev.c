/**
 * Tanggal: 14 Maret 2026
 * Link: https://www.codewars.com/kata/5168bb5dfe9a00b126000018/train/c
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

char *strrev(char *str) {
    size_t len = strlen(str);
    size_t half_len = len / 2;

    int i = 0;
    int j = len - 1;

    while (i < half_len) {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;

        i++;
        j--;
    }

    return str;
}

int main() {
    char str[] = "hello";
    char *reversed = strrev(str);
    printf("%s\n", reversed);

    return 0;
}
