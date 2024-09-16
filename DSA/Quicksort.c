#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {

    // Initialize pivot to be the first element
    int p = arr[low];
    int i = low;
    int j = high;

    while (i < j) {

        // Find the first element greater than the pivot 
        while (arr[i] <= p && i <= high - 1) {
            i++;
        }

        // Find the first element smaller than the pivot
        while (arr[j] > p && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {

        // call partition function to find Partition Index
        int pi = partition(arr, low, high);

        // Recursively call quick_sort for left and right
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main() {
  
    int arr[] = { 4, 2, 5, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n")

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
