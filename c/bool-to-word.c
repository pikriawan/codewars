/**
 * Tanggal: 7 Juli 2025
 * Link: https://www.codewars.com/kata/53369039d7ab3ac506000467/train/c
 */

#include <stdbool.h>
#include <stdio.h>

const char *bool_to_word(bool value) {
    if (value == true) {
        return "Yes";
    }

    return "No";
}

int main() {
    printf("%s\n", bool_to_word(true));
    printf("%s\n", bool_to_word(false));

    return 0;
}
