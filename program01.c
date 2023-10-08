// Lab Program 1. Write a C program to take input two integers and print their sum.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first no.: ");
    scanf("%d", &a);
    printf("Enter second no.: ");
    scanf("%d", &b);
    printf("The sum is %d", a+b);
    return 0;
}