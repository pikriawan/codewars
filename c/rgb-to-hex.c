#include <stdio.h>

char digit_to_hex(int digit) {
    digit = digit % 16;

    if (digit < 10) {
        return digit + '0';
    }

    return digit - 10 + 'A';
}

void rgb_to_hex(int r, int g, int b, char hex[6 + 1]) {
    if (r < 0) {
        r = 0;
    }

    if (r > 255) {
        r = 255;
    }

    if (g < 0) {
        g = 0;
    }

    if (g > 255) {
        g = 255;
    }

    if (b < 0) {
        b = 0;
    }

    if (b > 255) {
        b = 255;
    }

    hex[0] = digit_to_hex(r / 16);
    hex[1] = digit_to_hex(r % 16);
    hex[2] = digit_to_hex(g / 16);
    hex[3] = digit_to_hex(g % 16);
    hex[4] = digit_to_hex(b / 16);
    hex[5] = digit_to_hex(b % 16);
    hex[6] = '\0';
}

int main() {
    int r = -20;
    int g = 275;
    int b = 125;
    char hex[6 + 1];

    rgb_to_hex(r, g, b, hex);

    printf("%s\n", hex);

    return 0;
}
