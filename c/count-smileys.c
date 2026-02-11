/**
 * Tanggal: 11 Februari 2026
 * Link: https://www.codewars.com/kata/583203e6eb35d7980400002a/train/c
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

bool valid_smiley(const char *string) {
    if (string[0] != ':' && string[0] != ';') {
        return false;
    }

    if (string[1] == '-' || string[1] == '~') {
        if (string[2] == ')' || string[2] == 'D') {
            return true;
        }
    } else {
        if (string[1] == ')' || string[1] == 'D') {
            return true;
        }
    }

    return false;
}

size_t count_smileys(size_t length, const char *const array[length]) {
    if (length == 0) {
        return 0;
    }

    int result = 0;

    for (int i = 0; i < length; i++) {
        if (valid_smiley(array[i])) {
            result++;
        }
    }

    return result;
}

int main() {
    size_t length = 4;
    const char *const array[] = {
        ":D",
        ":~)",
        ";~D",
        ":)"
    };

    size_t result = count_smileys(length, array);
    printf("%zu\n", result);

    return 0;
}
