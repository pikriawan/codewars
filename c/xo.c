/**
 * Tanggal: 9 Januari 2026
 * Link: https://www.codewars.com/kata/55908aad6620c066bc00002a/train/c
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool xo(const char *str) {
    int x_count = 0;
    int o_count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'x' || str[i] == 'X') {
            x_count++;
        } else if (str[i] == 'o' || str[i] == 'O') {
            o_count++;
        }
    }

    return x_count == o_count;
}

int main() {
    printf("%d\n", xo("xxoo"));
    printf("%d\n", xo("xxOo"));
    printf("%d\n", xo("abcd"));
    printf("%d\n", xo("axco"));

    return 0;
}
