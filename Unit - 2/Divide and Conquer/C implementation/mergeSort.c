//Program to sort a array using merge sort
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

void merge(int arr[], int arr1[], int arr2[], int n)
{
    int len1 = n/2;
    int len2 = n - len1;
    int i = 0, j = 0, k = 0;
    while(i < len1 && j < len2){
        if(arr1[i] <= arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
        }
    }

    while(i < len1)
    {
        arr[k++] = arr1[i++];
    }

    while(j < len2)
    {
        arr[k++] = arr2[j++];
    }
}

void mergeSort(int arr[], int n)
{
    if(n == 1) return;
    int len1 = n/2;
    int len2 = n - len1;
    int arr1[len1], arr2[len2];
    int i = 0, j = 0, k = 0;
    while(i < len1)
    {
        arr1[i++] = arr[k++];
    }

    while(j < len2)
    {
        arr2[j++] = arr[k++];
    }

    mergeSort(arr1, len1);
    mergeSort(arr2, len2);
    merge(arr, arr1, arr2, n);
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
    mergeSort(arr, n);
    printf("\nArray after sorting:\n");
    printArray(arr, n);
    return 0;
}