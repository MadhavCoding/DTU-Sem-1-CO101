// Lab Program 2. Write a C program to take input four integers and print their average.
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter first no.: ");
    scanf("%d", &a);
    printf("Enter second no.: ");
    scanf("%d", &b);
    printf("Enter third no.: ");
    scanf("%d", &c);
    printf("Enter fourth no.: ");
    scanf("%d", &d);
    float ans=a+b+c+d;
    printf("The average is %f", ans/4);
    return 0;
}