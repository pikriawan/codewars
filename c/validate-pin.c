/**
 * Tanggal: 10 Februari 2026
 * Link: https://www.codewars.com/kata/55f8a9c06c018a0d6e000132/train/c
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool validate_char(char c) {
    char valid_chars[] = {
        '1',
        '2',
        '3',
        '4',
        '5',
        '6',
        '7',
        '8',
        '9',
        '0'
    };

    for (int i = 0; i < 10; i++) {
        if (c == valid_chars[i]) {
            return true;
        }
    }

    return false;
}

bool validate_pin(const char *pin) {
    int length = strlen(pin);

    for (int i = 0; i < length; i++) {
        if (!validate_char(pin[i])) {
            return false;
        }
    }

    if (length != 4 && length != 6) {
        return false;
    }

    return true;
}

int main() {
    printf("%d\n", validate_pin("1"));
    printf("%d\n", validate_pin("1.34"));
    printf("%d\n", validate_pin("0000"));
    printf("%d\n", validate_pin("1234"));

    return 0;
}
