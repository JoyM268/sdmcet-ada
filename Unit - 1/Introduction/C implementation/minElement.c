//Determine minimum value in given array recursively
#include <stdio.h>

int minElement(int A[], int n) 
{
    if (n == 1)
        return A[0];
    else 
    {
        int temp = minElement(A, n - 1);
        if (temp <= A[n - 1])
            return temp;
        else
            return A[n - 1];
    }
}

int main() 
{
    int array[] = {3, 1, 15, -4, 2, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int minValue = minElement(array, size);
    printf("The smallest element in the array is: %d\n", minValue);
    return 0;
}