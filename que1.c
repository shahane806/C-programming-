// 1. WAP to find sum of two commands

#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum is %d\n", sum);
    return 0;
}