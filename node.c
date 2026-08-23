#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(void) {
    Node *node = malloc(sizeof *node);

    if (node == nullptr) {
        fputs("memory allocation failed\n", stderr);
        return EXIT_FAILURE;
    }

    node->value = 100;
    node->next = nullptr;

    printf("value = %d\n", node->value);

    free(node);

    return EXIT_SUCCESS;
}
