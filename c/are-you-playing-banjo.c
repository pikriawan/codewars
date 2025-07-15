/**
 * Tanggal: 15 Juli 2025
 * Link: https://www.codewars.com/kata/53af2b8861023f1d88000832/train/c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *are_you_playing_banjo(const char *name) {
    char *result;
    char suffix[21];

    if (name[0] == 'R' || name[0] == 'r') {
        strcpy(suffix, " plays banjo");
    } else {
        strcpy(suffix, " does not play banjo");
    }

    result = (char*)calloc(strlen(name) + strlen(suffix), sizeof(char));

    for (int i = 0; i < strlen(name); i++) {
        result[i] = name[i];
    }

    for (int i = strlen(name); i < strlen(name) + strlen(suffix); i++) {
        result[i] = suffix[i - strlen(name)];
    }

    return result;
}

int main() {
    printf("%s\n", are_you_playing_banjo("Robert"));
    printf("%s\n", are_you_playing_banjo("Paijo"));

    return 0;
}
