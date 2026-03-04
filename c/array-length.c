#include <stddef.h>
#include <stdio.h>

#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

int main() {
    int array[] = {1, 2, 3, 4};
    size_t length = ARRAY_LENGTH(array);
    printf("%zu\n", length);

    return 0;
}
