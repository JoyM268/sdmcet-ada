//Program to implement binary search
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

int binarySearch(int arr[], int n, int k)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = (l + r)/2;
        if(arr[mid] == k)
        {
            return mid;
        }
        else if(k < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, arr[SIZE], k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order: ", n);
    readArray(arr, n);
    printf("Enter key element: ");
    scanf("%d", &k);
    int index = binarySearch(arr, n, k);
    if(index == -1)
    {
        printf("Element %d not found\n", k);
    }
    else
    {
        printf("Element %d found at index %d\n", k, index);
    }
    return 0;
}