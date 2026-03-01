/**
 * Tanggal: 1 Maret 2026
 * Link: https://www.codewars.com/kata/52685f7382004e774f0001f7/train/c
 */

#include <stdio.h>

char *human_readable_time(unsigned seconds, char *time_string) {
    unsigned s = seconds;

    unsigned h = s / 3600;
    s -= h * 3600;

    unsigned m = s / 60;
    s -= m * 60;

    sprintf(time_string, "%02u:%02u:%02u", h, m, s);
    return time_string;
}

int main() {
    unsigned seconds = 359999;
    char time_string[9];

    human_readable_time(seconds, time_string);
    printf("%s\n", time_string);

    return 0;
}
