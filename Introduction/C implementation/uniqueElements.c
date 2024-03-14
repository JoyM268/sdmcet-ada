//Program to check if all the elements are distinct in a array
#include <stdio.h>

int elementsDistinct(int A[], int size);
int main() 
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    if (elementsDistinct(array, size)) 
    {
        printf("Elements in the array are distinct\n");
    } 
    else 
    {
        printf("Elements in the array are not distinct\n");
    }
    return 0;
}

int elementsDistinct(int A[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = i + 1; j < size; j++) 
        {
            if (A[i] == A[j])
            {
                return 0;
            }
        }
    }
    return 1;
}