/**
 * Tanggal: 13 Februari 2026
 * Link: https://www.codewars.com/kata/5715eaedb436cf5606000381/train/c
 */

#include <stddef.h>
#include <stdio.h>

int positive_sum(const int values[/* count */], size_t count) {
    int result = 0;

    for (int i = 0; i < count; i++) {
        if (values[i] > 0) {
            result += i;
        }
    }

    return result;
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    size_t count = sizeof(values) / sizeof(values[0]);

    printf("%d\n", positive_sum(values, count));

    return 0;
}
