#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocate memory for 5 integers using malloc
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Array using malloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reallocate memory to hold 10 integers
    arr = (int*) realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Initialize new values
    for (int i = n; i < 10; i++) {
        arr[i] = i + 1;
    }

    printf("Array after realloc:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}

