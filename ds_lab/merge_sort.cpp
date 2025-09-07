#include <stdio.h>

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Merge function
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[left..right]
    int i = 0; // Initial index of the first subarray
    int j = 0; // Initial index of the second subarray
    int k = left; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    printf("After merging: ");
    printArray(arr, right + 1);
}

// Merge Sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        printf("Dividing: ");
        printArray(arr + left, right - left + 1);

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);

        printf("After iteration: ");
        printArray(arr, right + 1);
    }
}

int main() {
    
        int l;
            printf("Enter the size of the array: ");
            scanf("%d", &l);

            int arr[l];
            printf("Enter %d elements of the array: ", l);
            for (int i = 0; i < l; i++) {
                scanf("%d", &arr[i]);
            }

            printf("Original array: \n");
            printArray(arr, l);
            int choice;
    
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Exiting program.\n");
            break;
        case 2: {
            

            mergeSort(arr, 0, l - 1);

            printf("\nSorted array: \n");
            printArray(arr, l);
            break;
        }
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
