#include <stdio.h>
#include "stats.h"

int main(void) {
    int values[] = {4, 7, 1, 9, 3};
    size_t count = sizeof(values) / sizeof(values[0]);

    int total = sum_array(values, count);

    printf("Sum: %d\n", total);

    return 0;
}
