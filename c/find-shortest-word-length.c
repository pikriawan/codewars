/**
 * Tanggal: 16 Februari 2026
 * Link: https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

ssize_t find_shortest_word_length(const char *string) {
    char *copy = (char *)malloc(strlen(string) + 1);
    strcpy(copy, string);

    const char delimiter[2] = " ";

    char *token;
    token = strtok(copy, delimiter);

    ssize_t result = strlen(token);

    while (token != NULL) {
        if (strlen(token) < result) {
            result = strlen(token);
        }

        token = strtok(NULL, delimiter);
    }

    return result;
}

int main() {
    printf("%zd\n", find_shortest_word_length("bitcoin take over the world maybe who knows perhaps"));

    return 0;
}
