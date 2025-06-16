/**
 * Tanggal: 14 Juni 2025
 * Link: https://www.codewars.com/kata/54edbc7200b811e956000556/train/c
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

size_t count_sheep(const bool sheep[/* count */], size_t count) {
    int result = 0;

    for (int i = 0; i < count; i++) {
        if (((int) sheep[i])) {
            result++;
        }
    }

    return result;
}

int main() {
    const bool sheep[10] = {true, true, true, true, true, true, true, false, true, false};
    printf("%d\n", (int) count_sheep(sheep, 10));
    return 0;
}
