#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparisons = 0, swaps = 0;

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    swaps++;
}

// Bubble Sort
void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
        }
}

// Selection Sort
void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (a[j] < a[min])
                min = j;
        }
        if (min != i)
            swap(&a[i], &a[min]);
    }
}

// Insertion Sort
void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            comparisons++;
            a[j + 1] = a[j];
            swaps++;
            j--;
        }
        a[j + 1] = key;
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int n, choice;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    srand(time(0));
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000 + 1;

    printf("Before sorting:\n");
    display(arr, n);

    printf("\nChoose sorting algorithm:\n");
    printf("1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1: bubbleSort(arr, n); break;
        case 2: selectionSort(arr, n); break;
        case 3: insertionSort(arr, n); break;
        default: printf("Invalid choice"); return 0;
    }

    printf("\nAfter sorting:\n");
    display(arr, n);

    printf("\nTotal Comparisons: %d", comparisons);
    printf("\nTotal Swaps: %d\n", swaps);

    return 0;
}
