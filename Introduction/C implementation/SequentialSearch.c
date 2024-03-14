//Program to perform sequential search on a array for given key element K
#include <stdio.h>

int sequentialSearch(int A[], int n, int K) 
{
    int i = 0;
    while (i < n && A[i] != K) 
    {
        i++;
    }
    if (i < n) 
    {
        return i;
    }
    else 
    {
        return -1;
    }
}

int main() 
{
    int array[] = {3, 6, 9, 12, 15};
    int key = 9;
    int size = sizeof(array) / sizeof(array[0]);
    int index = sequentialSearch(array, size, key);
    if (index != -1) 
    {
        printf("Element found at index: %d\n", index);
    } 
    else 
    {
        printf("Element not found.\n");
    }
    return 0;
}