/**
 * Tanggal: 23 Juli 2025
 * Link: https://www.codewars.com/kata/5266876b8f4bf2da9b000362/train/c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *likes(size_t n, const char *const names[n]) {
    if (n == 0) {
        return strdup("no one likes this");
    } else if (n == 1) {
        int result_length = 0;
        result_length += strlen(names[0]);
        result_length += strlen(" likes this");

        char *result = calloc(result_length + 1, sizeof(char));
        strcat(result, names[0]);
        strcat(result, " likes this");
        result[result_length] = '\0';

        return result;
    } else if (n == 2) {
        int result_length = 0;
        result_length += strlen(names[0]);
        result_length += strlen(" and ");
        result_length += strlen(names[1]);
        result_length += strlen(" like this");

        char *result = calloc(result_length + 1, sizeof(char));
        strcat(result, names[0]);
        strcat(result, " and ");
        strcat(result, names[1]);
        strcat(result, " like this");
        result[result_length] = '\0';

        return result;
    } else if (n == 3) {
        int result_length = 0;
        result_length += strlen(names[0]);
        result_length += strlen(", ");
        result_length += strlen(names[1]);
        result_length += strlen(" and ");
        result_length += strlen(names[2]);
        result_length += strlen(" like this");

        char *result = calloc(result_length + 1, sizeof(char));
        strcat(result, names[0]);
        strcat(result, ", ");
        strcat(result, names[1]);
        strcat(result, " and ");
        strcat(result, names[2]);
        strcat(result, " like this");
        result[result_length] = '\0';

        return result;
    } else {
        int others_length = n - 2;
        char *others_str = calloc(20, sizeof(char));
        sprintf(others_str, "%d", others_length);

        int result_length = 0;
        result_length += strlen(names[0]);
        result_length += strlen(", ");
        result_length += strlen(names[1]);
        result_length += strlen(" and ");
        result_length += strlen(others_str);
        result_length += strlen(" others like this");

        char *result = calloc(result_length + 1, sizeof(char));
        strcat(result, names[0]);
        strcat(result, ", ");
        strcat(result, names[1]);
        strcat(result, " and ");
        strcat(result, others_str);
        strcat(result, " others like this");
        result[result_length] = '\0';

        free(others_str);

        return result;
    }
}

int main() {
    const char *const names[] = {"Parlan", "Paidi", "Parno", "Paijo"};
    printf("%s\n", likes(4, names));

    return 0;
}
