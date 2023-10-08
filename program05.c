// Lab Program 5: Write a C program to implement Bitwise Operators.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first no.: ");
    scanf("%d", &a);
    printf("Enter second no.: ");
    scanf("%d", &b);
    printf("a & b is %d\n", (a&b));
    printf("a | b is %d\n", (a|b));
    printf("a ^ b is %d\n", (a^b));
    printf("a ^ b is %d\n", (a^b));
    printf("~a is %d\n", (~a));
    printf("~b is %d\n", (~b));
    printf("a << b is %d\n", (a<<b));
    printf("a >> b is %d\n", (a>>b));
    return 0;
}