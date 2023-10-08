// Lab Program 6: Write a C program to find the greatest of 5 numbers using IF ELSE IF ELSE  Statement
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if ((a>=b)&&(a>=c)&&(a>=d)&&(a>=e))
    {
        printf("The largest no. is %d", a);
    }
    else if ((b>=a)&&(b>=c)&&(b>=d)&&(b>=e))
    {
        printf("The largest no. is %d", b);
    }
    else if ((c>=a)&&(c>=b)&&(c>=d)&&(c>=e))
    {
        printf("The largest no. is %d", c);
    }
    else if ((d>=a)&&(d>=b)&&(d>=c)&&(d>=e))
    {
        printf("The largest no. is %d", d);
    }
    else
    {
        printf("The largest no. is %d", e);
    }
    return 0;
}