//Program to implement brute-force string matching
#include<stdio.h>
#include<string.h>
#define SIZE 50

int stringMatch(char text[], char pattern[])
{
    int n = strlen(text);
    int m = strlen(pattern);
    int i, j;
    for(i = 0; i <= n - m; i++){
        j = 0;
        while(j < m && text[i + j] == pattern[j])
        {
            j++;
        }
        if(j == m)
            return i;
    }
    return -1;
}

int main()
{
    char text[SIZE], pattern[SIZE];
    printf("Enter the text: ");
    scanf("%s", text);
    printf("Enter the pattern: ");
    scanf("%s", pattern);
    int index = stringMatch(text, pattern);
    if(index == -1)
    {
        printf("String match not found\n");
    }
    else
    {
        printf("String match found at index %d\n", index);
    }
}