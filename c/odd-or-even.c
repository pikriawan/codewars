#include <stddef.h>
#include <stdio.h>

const char *odd_or_even(const int numbers[/* size */], size_t size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    if (sum % 2 == 0) {
        return "even";
    }

    return "odd";
}

int main() {
    int size = 5;
    int numbers[] = {0, 1, 2, 3, 4};
    printf("%s\n", odd_or_even(numbers, size));

    return 0;
}
