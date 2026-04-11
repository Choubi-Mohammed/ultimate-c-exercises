#include <stdio.h>
#include <stdlib.h>

// Takes a pointer to a pointer (int **)
void allocate_memory(int **ptr_to_ptr) {
    // Allocate memory for one integer
    int *new_ptr = (int *)malloc(sizeof(int));

    if (new_ptr == NULL) {
        fprintf(stderr, "Allocation failed in function.\n");
        // Optionally, set the main pointer to NULL on failure
        *ptr_to_ptr = NULL;
        return;
    }

    // Store the allocated address back into the pointer variable in main
    *ptr_to_ptr = new_ptr;

    // Store the value 1337 in the newly allocated memory block
    **ptr_to_ptr = 1337;
}

int main() {
    int *data_ptr = NULL; // Pointer starts as NULL

    printf("data_ptr address before call: %p\n", (void *)data_ptr);

    // Pass the ADDRESS of data_ptr
    allocate_memory(&data_ptr);

    printf("data_ptr address after call: %p\n", (void *)data_ptr);

    if (data_ptr != NULL) {
        printf("Value accessed via data_ptr: %d\n", *data_ptr);
        free(data_ptr);
    }

    return 0;
}
