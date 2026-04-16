/**
 * Tanggal: 17 April 2026
 * Link: https://www.codewars.com/kata/546f922b54af40e1e90001da/train/c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *alphabet_position(const char *text) {
    size_t length = strlen(text);
    char *result = malloc(length * 3 + 1);

    int i = 0;
    int j = 0;

    while (i < length) {
        char letter = '\0';

        if (text[i] >= 'A' && text[i] <= 'Z') {
            letter = text[i];
        }

        if (text[i] >= 'a' && text[i] <= 'z') {
            letter = text[i] - ('a' - 'A');
        }

        if (letter != '\0') {
            int index = letter - 'A' + 1;
            char *index_string = malloc(3);
            sprintf(index_string, "%d ", index);

            result[j] = index_string[0];
            j++;

            if (index_string[1] != ' ') {
                result[j] = index_string[1];
                j++;
            }

            free(index_string);

            result[j] = ' ';
            j++;
        }

        i++;
    }

    if (j == 0) {
        result[j] = '\0';
    } else {
        result[j - 1] = '\0';
    }

    return result;
}

int main() {
    const char text[] = "12345";
    char *result = alphabet_position(text);

    printf("%s\n", result);

    free(result);

    return 0;
}
