#include <stdio.h>
#include "record.h"

int main(void) {
    // 1. Create one Record using an initializer
    Record r = {1, 3.14};

    // 2. Print its fields using the . operator
    printf("id = %d, value = %.2f\n", r.id, r.value);

    // 3. Create a pointer that points to the object
    Record *record_ptr = &r;

    // 4. Print the same fields through the pointer using ->
    printf("id = %d, value = %.2f\n", record_ptr->id, record_ptr->value);

    // 5. Change value through the pointer
    record_ptr->value = 99.9;

    // Verify the original object changed
    printf("After change: id = %d, value = %.2f\n", r.id, r.value);

    return 0;
}
