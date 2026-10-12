#include <stdio.h>
#include <stdlib.h>

int main() {

    // 1. NULL Pointer
    int *ptr1 = NULL;
    printf("NULL Pointer: %p\n", ptr1);

    // 2. Void Pointer
    int a = 10;
    void *ptr2;
    ptr2 = &a;
    printf("Void Pointer (address of a): %p\n", ptr2);

    // 3. Wild Pointer (uninitialized)
    int *ptr3;
    printf("Wild Pointer (garbage value): %p\n", ptr3);

    // 4. Dangling Pointer
    int *ptr4 = (int *)malloc(sizeof(int));
    *ptr4 = 50;
    printf("Before free (value): %d\n", *ptr4);

    free(ptr4); // memory deallocated

    // ptr4 is now dangling
    printf("Dangling Pointer (after free): %p\n", ptr4);

    return 0;
}