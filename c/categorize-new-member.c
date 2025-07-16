/**
 * Tanggal: 17 Juli 2025
 * Link: https://www.codewars.com/kata/5502c9e7b3216ec63c0001aa/train/c
 */

#include <stddef.h>
#include <stdio.h>

enum membership {
    OPEN = 1,
    SENIOR = 2
};

void open_or_senior(size_t n, const int members[n][2], enum membership memberships[n]) {
    for (int i = 0; i < n; i++) {
        if (members[i][0] >= 55 && members[i][1] > 7) {
            memberships[i] = SENIOR;
        } else {
            memberships[i] = OPEN;
        }
    }
}

int main() {
    int members[][2] = {{18, 0}, {55, 8}};
    enum membership memberships[2];
    open_or_senior(2, members, memberships);

    for (int i = 0; i < 2; i++) {
        if (memberships[i] == OPEN) {
            printf("%d: %s\n", i, "Open");
        } else {
            printf("%d: %s\n", i, "Senior");
        }
    }

    return 0;
}
