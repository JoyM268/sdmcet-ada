//Program to count number of binary digits
#include<stdio.h>

int binDigits(int n);
int main() 
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Number of binary digits in %d is %d\n", n, binDigits(n));
    return 0;
}

int binDigits(int n) 
{
    int count = 1;
    while (n > 1) 
    {
        count += 1;
        n /= 2;
    }
    return count;
}