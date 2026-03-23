/**
 * Tanggal: 23 Maret 2026
 * Link: https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097/train/c
 */

#include <stdio.h>

int century_from_year(int year) {
    return (year - 1) / 100 + 1;
}

int main() {
    printf("%d\n", century_from_year(1705));
    printf("%d\n", century_from_year(1900));
    printf("%d\n", century_from_year(1601));
    printf("%d\n", century_from_year(2000));
    printf("%d\n", century_from_year(2742));

    return 0;
}
