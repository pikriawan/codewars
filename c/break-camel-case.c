/**
 * Tanggal: 25 Februari 2026
 * Link: https://www.codewars.com/kata/5208f99aee097e6552000148/train/c
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *break_camel_case(const char *camel_case) {
    size_t camel_case_length = strlen(camel_case);
    size_t result_length = camel_case_length;

    for (int i = 0; i < camel_case_length; i++) {
        int char_int = (int)(camel_case[i]);

        if (char_int >= 65 && char_int <= 90) {
            result_length++;
        }
    }

    char *result = (char *)malloc(result_length + 1);

    int i = 0;
    int j = 0;

    while (i < camel_case_length) {
        int char_int = (int)(camel_case[i]);

        if (char_int >= 65 && char_int <= 90) {
            result[j] = ' ';
            j++;
        }

        result[j] = camel_case[i];

        i++;
        j++;
    }

    result[result_length] = '\0';

    return result;
}

int main() {
    printf("%s\n", break_camel_case("camelCase"));
    printf("%s\n", break_camel_case("thisIsAVeryLongIdentifierName"));
    printf("%s\n", break_camel_case("unshift"));
    printf("%s\n", break_camel_case(""));

    return 0;
}
