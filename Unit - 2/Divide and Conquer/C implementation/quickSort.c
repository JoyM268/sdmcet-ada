//Program to sort a array using quick sort
#include<stdio.h>
#define SIZE 50

void readArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int l, int r)
{
    int p = arr[l], i = l, j = r + 1;
    do{
        do{
            i++;
        }while(arr[i] < p);

        do{
            j--;
        }while(arr[j] > p);
        swap(&arr[i], &arr[j]);
    }while(i < j);
    swap(&arr[i], &arr[j]);
    swap(&arr[l], &arr[j]);
    return j;
}

void quickSort(int arr[], int l, int r)
{
    if(l < r)
    {
        int s = partition(arr, l, r);
        quickSort(arr, l, s - 1);
        quickSort(arr, s + 1, r);
    }
}

int main()
{
    int n, arr[SIZE];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    readArray(arr, n);
    printf("Array before sorting:\n");
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    printf("\nArray after sorting:\n");
    printArray(arr, n);
    return 0;
}