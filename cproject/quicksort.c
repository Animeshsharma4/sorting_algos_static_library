#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = (low - 1);     // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Function to perform the quick sort
void quicksort1(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array into two subarrays and get the pivot index
        int pivot_index = partition(arr, low, high);

        // Recursively sort the subarrays
        quicksort1(arr, low, pivot_index - 1);
        quicksort1(arr, pivot_index + 1, high);
    }
}
  

void quicksort(int arr[],int high){
quicksort1(arr,0,high);
}
