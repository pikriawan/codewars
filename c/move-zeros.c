/**
 * Tanggal: 13 April 2026
 * Link: https://www.codewars.com/kata/52597aa56021e91c93000cb0/train/c
 */

#include <stddef.h>
#include <stdio.h>

void move_zeros(size_t len, int nums[len]) {
    int i = 0;

    for (int j = 0; j < len; j++) {
        if (nums[j] != 0) {
            nums[i] = nums[j];
            i++;
        }
    }

    for (int j = i; j < len; j++) {
        nums[j] = 0;
    }
}

int main() {
    int nums[] = {0, 1, 0, 2, 0, 3, 4, 5};
    int len = sizeof(nums) / sizeof(nums[0]);

    move_zeros(len, nums);

    for (int i = 0; i < len; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;
}
