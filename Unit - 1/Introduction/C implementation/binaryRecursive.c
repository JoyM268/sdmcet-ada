//Program to count number of binary digits recursively
#include<stdio.h>

int binaryDigits(int n){
    if(n == 1) 
        return 1;
    return 1 + binaryDigits(n/2);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Number of binary digits in %d is %d\n", n, binaryDigits(n));
    return 0;
}