/**
 * Tanggal: 17 Februari 2026
 * Link: https://www.codewars.com/kata/5bb904724c47249b10000131/train/c
 */

#include <stdio.h>

int points(const char *const games[10]) {
    int result = 0;

    for (int i = 0; i < 10; i++) {
        int x = (int)games[i][0];
        int y = (int)games[i][2];

        if (x > y) {
            result += 3;
        } else if (x == y) {
            result++;
        }
    }

    return result;
}

int main() {
    const char* const games[10] = {"1:0","2:0","3:0","4:0","2:1","3:1","4:1","3:2","4:2","4:3"};
    printf("%d\n", points(games));

    return 0;
}
