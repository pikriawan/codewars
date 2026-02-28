/**
 * Tanggal: 28 Februari 2026
 * Link: https://www.codewars.com/kata/5526fc09a1bbd946250002dc/train/c
 */

#include <stddef.h>
#include <stdio.h>

int find_outlier(const int values[/* count */], size_t count) {
    size_t odds_length = 0;
    size_t evens_length = 0;
    int result;

    for (int i = 0; i < count; i++) {
        if (values[i] % 2 == 0) {
            evens_length++;
        } else {
            odds_length++;
        }

        if (odds_length == 2 || evens_length == 2) {
            break;
        }
    }

    if (odds_length == 2) {
        for (int i = 0; i < count; i++) {
            if (values[i] % 2 == 0) {
                result = values[i];
                break;
            }
        }
    } else {
        for (int i = 0; i < count; i++) {
            if (values[i] % 2 != 0) {
                result = values[i];
                break;
            }
        }
    }

    return result;
}

int main() {
    const int values[] = {2, 4, 6, 8, 11};
    size_t count = sizeof(values) / sizeof(values[0]);

    int outlier = find_outlier(values, count);
    printf("%d\n", outlier);

    return 0;
}
