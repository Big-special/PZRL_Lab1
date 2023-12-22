#include <stdio.h>
#include <stdlib.h>

void selectionSort(double *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        // Swap arr[i] and arr[maxIndex]
        double temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of elements.\n");
        return 1;
    }

    double *arr = (double *)malloc(n * sizeof(double));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d real numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    selectionSort(arr, n);

    printf("Sorted array in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%lf ", arr[i]);
    }

    free(arr);

    return 0;
}
