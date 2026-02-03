/**
 * Tanggal: 3 Februari 2026
 * Link: https://www.codewars.com/kata/5672a98bdbdd995fad00000f/train/c
 */

#include <stdio.h>

enum tool {
    ROCK,
    PAPER,
    SCISSORS
};

enum outcome {
    P1_WON,
    P2_WON,
    DRAW
};

enum outcome rps(enum tool p1, enum tool p2) {
    if (p1 == p2) {
        return DRAW;
    }

    if (
        (p1 == ROCK && p2 == PAPER) ||
        (p1 == PAPER && p2 == SCISSORS) ||
        (p1 == SCISSORS && p2 == ROCK)
    ) {
        return P2_WON;
    }

    return P1_WON;
}

int main() {
    enum tool p1 = ROCK;
    enum tool p2 = PAPER;
    enum outcome result = rps(p1, p2);

    printf("P1: %d\n", p1);
    printf("P2: %d\n", p2);
    printf("Outcome: %d\n", result);

    return 0;
}
