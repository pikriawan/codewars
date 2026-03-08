/**
 * Tanggal: 8 Maret 2026
 * Link: https://www.codewars.com/kata/5544c7a5cb454edb3c000047/train/c
 */

#include <stdio.h>

int bouncing_ball(double h, double bounce, double window) {
    if (h <= 0) {
        return -1;
    }

    if (bounce <= 0 || bounce >= 1) {
        return -1;
    }

    if (window >= h) {
        return -1;
    }

    int count = 1;
    double remaining = h * bounce;

    while (remaining > window) {
        count += 2;
        remaining = remaining * bounce;
    }

    return count;
}

int main() {
    double h = 2;
    double bounce = 0.5;
    double window = 1;

    printf("%d\n", bouncing_ball(h, bounce, window));

    return 0;
}
