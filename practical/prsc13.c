#include <stdio.h>

int main() {
    int N, i, j, minIndex, temp;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    // Read the elements
    printf("Enter %d numbers:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort Algorithm
    for(i = 0; i < N - 1; i++) {
        minIndex = i;
        for(j = i + 1; j < N; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if(minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Display sorted array
    printf("Sorted numbers in ascending order:\n");
    for(i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

