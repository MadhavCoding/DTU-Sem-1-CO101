// Lab Program 3: Write a C program to implement Relational Operators.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first no.: ");
    scanf("%d", &a);
    printf("Enter second no.: ");
    scanf("%d", &b);
    printf("a == b is %d\n", a==b);
    printf("a != b is %d\n", a!=b);
    printf("a <= b is %d\n", a<=b);
    printf("a >= b is %d\n", a>=b);
    printf("a < b is %d\n", a<b);
    printf("a > b is %d\n", a>b);
    return 0;
}