/**
 * Tanggal: 22 Juli 2025
 * Link: https://www.codewars.com/kata/5259b20d6021e9e14c0010d4/train/c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse_words(const char *text) {
    char *result = (char *) calloc(strlen(text) + 1, sizeof(char));
    strcpy(result, text);

    int start = 0;
    int end = -1;

    while (text[start] == ' ') {
        start++;
    }

    for (int i = start; i < strlen(result); i++) {
        if (start == -1) {
            if (result[i - 1] == ' ' && result[i] != ' ') {
                start = i;
                end = -1;
            }
        }

        if (end == -1) {
            if (result[i] != ' ' && (result[i + 1] == ' ' || result[i + 1] == '\0')) {
                end = i;

                int j = start;
                int k = end;

                while (j < k) {
                    char temp = result[j];
                    result[j] = result[k];
                    result[k] = temp;
                    j++;
                    k--;
                }

                start = -1;
            }
        }
    }

    return result;
}

int main() {
    printf("%s\n", reverse_words("The quick brown fox"));
    printf("%s\n", reverse_words("a b c d"));
    return 0;
}
