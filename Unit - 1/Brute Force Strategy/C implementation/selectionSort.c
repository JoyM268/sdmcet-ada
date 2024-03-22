//Program to sort a array using selection sort
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

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min;
    for(i = 0; i < n - 1; i++)
    {
        min = i;        
        for(j = i + 1; j < n; j++)
        {
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        if(min != i)
            swap(&arr[min], &arr[i]);
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
    selectionSort(arr, n);
    printf("\nArray after sorting:\n");
    printArray(arr, n);
    return 0;
}