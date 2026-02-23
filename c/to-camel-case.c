/**
 * Tanggal: 23 Februari 2026
 * Link: https://www.codewars.com/kata/517abf86da9663f1d2000003/train/c
 */

#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void to_camel_case(const char *text, char *camel) {
    size_t length = strlen(text);

    if (length == 0) {
        camel[0] = '\0';
        return;
    }

    int i = 0;
    int j = 0;
    bool shouldBeCapitalized = false;

    while (i < length) {
        if (text[i] == '-' || text[i] == '_') {
            i++;
            shouldBeCapitalized = true;
            continue;
        }

        if (shouldBeCapitalized) {
            camel[j] = (char)toupper(text[i]);
            shouldBeCapitalized = false;
        } else {
            camel[j] = text[i];
        }

        i++;
        j++;
    }

    camel[j] = '\0';
}

int main() {
    const char text[] = "above-large-Mother";
    size_t length = strlen(text);
    char camel[length + 1];

    to_camel_case(text, camel);
    printf("%s\n", camel);

    return 0;
}
