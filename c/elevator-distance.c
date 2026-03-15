/**
 * Tanggal: 16 Maret 2026
 * Link: https://www.codewars.com/kata/59f061773e532d0c87000d16/train/c
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

unsigned elevator_distance(size_t length, const int floors[length]) {
    int current_floor = floors[0];
    unsigned total_distance = 0;

    for (int i = 1; i < length; i++) {
        int distance = abs(floors[i] - current_floor);
        total_distance += distance;
        current_floor = floors[i];
    }

    return total_distance;
}

int main() {
    const int floors[] = {5, 2, 8};
    size_t length = sizeof(floors) / sizeof(floors[0]);

    unsigned result = elevator_distance(length, floors);
    printf("%u\n", result);

    return 0;
}
