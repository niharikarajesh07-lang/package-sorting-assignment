#include <stdio.h>

#define N 8

// Structure to store package details
typedef struct {
    int weight;
    int id;
} Package;

int mergeComparisons = 0;
int quickComparisons = 0;

/* Function to display packages */
void display(Package a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("P%d(%d) ", a[i].id, a[i].weight);

    printf("\n");
}

/* ---------------- MERGE SORT ---------------- */

void merge(Package a[], int low, int mid, int high)
{
    Package temp[N];
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        mergeComparisons++;

        // <= makes Merge Sort stable
        if (a[i].weight <= a[j].weight)
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low; i <= high; i++)
        a[i] = temp[i];
}

void mergeSort(Package a[], int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);

        printf("Merge step: ");
        display(a + low, high - low + 1);
    }
}

/* ---------------- QUICK SORT ---------------- */

int partition(Package a[], int low, int high)
{
    int pivot = a[high].weight;
    int i = low - 1;
    int j;
    Package temp;

    for (j = low; j < high; j++)
    {
        quickComparisons++;

        if (a[j].weight < pivot)
        {
            i++;

            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return i + 1;
}

void quickSort(Package a[], int low, int high)
{
    int pi;

    if (low < high)
    {
        pi = partition(a, low, high);

        printf("Partition (pivot = %d): ", a[pi].weight);
        display(a + low, high - low + 1);

        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

/* ---------------- MAIN ---------------- */

int main()
{
    Package packages[N] = {
        {20, 1},
        {15, 2},
        {20, 3},
        {10, 4},
        {15, 5},
        {20, 6},
        {25, 7},
        {10, 8}
    };

    Package mergeArray[N];
    Package quickArray[N];

    int i;

    /* Copy original array */
    for (i = 0; i < N; i++)
    {
        mergeArray[i] = packages[i];
        quickArray[i] = packages[i];
    }

    printf("========================================\n");
    printf(" PACKAGE SORTING SYSTEM\n");
    printf("========================================\n\n");

    printf("Original packages:\n");
    display(packages, N);

    /* -------- MERGE SORT -------- */

    printf("\n----- MERGE SORT -----\n");

    mergeSort(mergeArray, 0, N - 1);

    printf("\nFinal Merge Sort result:\n");
    display(mergeArray, N);

    printf("Number of comparisons = %d\n", mergeComparisons);

    /* -------- QUICK SORT -------- */

    printf("\n----- QUICK SORT -----\n");

    quickSort(quickArray, 0, N - 1);

    printf("\nFinal Quick Sort result:\n");
    display(quickArray, N);

    printf("Number of comparisons = %d\n", quickComparisons);

    /* -------- STABILITY CHECK -------- */

    printf("\n----- STABILITY CHECK -----\n");

    printf("\nOriginal order of equal weights:\n");
    printf("10 kg : P4, P8\n");
    printf("15 kg : P2, P5\n");
    printf("20 kg : P1, P3, P6\n");

    printf("\nMerge Sort preserves this order:\n");
    display(mergeArray, N);

    printf("\nNote: Standard Quick Sort is NOT guaranteed to preserve\n");
    printf("the original order of equal-weight packages.\n");

    return 0;
}
