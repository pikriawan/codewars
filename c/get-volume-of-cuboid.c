/**
 * Tanggal: 1 April 2026
 * Link: https://www.codewars.com/kata/58261acb22be6e2ed800003a/train/c
 */

#include <stdio.h>

double get_volume_of_cuboid(double length, double width, double height) {
    return length * width * height;
}

int main() {
    printf("%f\n", get_volume_of_cuboid(1, 2, 2));

    return 0;
}
