/**
 * Tanggal: 9 Februari 2026
 * Link: https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0/train/c
 */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

char *remove_char(char *dst, const char *src) {
    size_t len = strlen(src);

    if (len <= 2) {
        dst[0] = '\0';
        return dst;
    }

    int i = 1;
    int j = 0;

    while (i < len) {
        dst[j] = src[i];
        i++;
        j++;
    }

    dst[len - 2] = '\0';

    return dst;
}

int main() {
    char src[] = "eloquent";
    char dst[9];
    remove_char(dst, src);

    printf("%s\n", src);
    printf("%s\n", dst);

    return 0;
}
