#include <stdio.h>

int Bsearch(int arr[], int size, int target){
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int Lsearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int size = 51; // values 50..100 inclusive
    int arr[51];
    for (int i = 0; i < size; i++) {
        arr[i] = 50 + i;v
    }

    int input;
    printf("Enter a number to search (50-100): ");
    if (scanf("%d", &input) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int lin_idx = Lsearch(arr, size, input);
    if (lin_idx != -1)
        printf("Linear search: found at index %d\n", lin_idx);
    else
        printf("Linear search: not found\n");

    int bin_idx = Bsearch(arr, size, input);
    if (bin_idx != -1)
        printf("Binary search: found at index %d\n", bin_idx);
    else
        printf("Binary search: not found\n");

    return 0;
}