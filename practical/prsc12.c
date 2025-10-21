#include <stdio.h>

int main() {
    int N, i, j, temp;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];

    // Read the elements
    printf("Enter %d numbers:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort Algorithm
    for(i = 0; i < N - 1; i++) {
        for(j = 0; j < N - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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

