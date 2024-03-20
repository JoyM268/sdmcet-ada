//Program to find max element in a array
#include <stdio.h>

int maxElement(int A[], int size);
int main() 
{
    int array[] = {3, 1, 15, 2, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int maxValue = maxElement(array, size);
    printf("The largest element in the array is: %d\n", maxValue);
    return 0;
}

int maxElement(int A[], int size) 
{
    int maxVal = A[0];
    for (int i = 1; i < size; i++) 
    {
        if (A[i] > maxVal) 
        {
            maxVal = A[i];
        }
    }
    return maxVal;
}
