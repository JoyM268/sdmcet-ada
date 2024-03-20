//Program to find the gcd of two given numbers
#include<stdio.h>

int gcd(int m, int n)
{
    while(n != 0)
    {
        int temp = m % n;
        m = n;
        n = temp;
    }
    return m;
}

int main()
{
    int m, n;
    printf("Enter the two numbers: ");
    scanf("%d %d", &m, &n);
    printf("GCD of %d and %d is %d\n", m, n, gcd(m, n));
    return 0;
}