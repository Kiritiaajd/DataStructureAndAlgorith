#include <stdio.h>

// Function prototype for Display
void Display(int *arr, int len);

void MergeSort(int *arr1, int *arr2, int arr1_len, int arr2_len) {
    int i = 0;
    int j = 0;
    int k = 0;
    int arr[arr1_len + arr2_len]; // Merged array

    // Merge the two sorted arrays
    while (i < arr1_len && j < arr2_len) {
        if (arr1[i] < arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1 (if any)
    while (i < arr1_len) {
        arr[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2 (if any)
    while (j < arr2_len) {
        arr[k++] = arr2[j++];
    }

    // Display the merged array
    printf("Merged Array: ");
    Display(arr, arr1_len + arr2_len);
}

void Display(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 4, 6, 7}; // size = 5
    int arr2[] = {5, 6, 8, 9, 11}; // size = 5
    int arr1_len = sizeof(arr1) / sizeof(arr1[0]);
    int arr2_len = sizeof(arr2) / sizeof(arr2[0]);

    MergeSort(arr1, arr2, arr1_len, arr2_len);

    return 0;
}
