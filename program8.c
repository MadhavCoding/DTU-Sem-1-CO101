// Lab Program 6: Write a C program to find sum of a 5 digit number.
#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + (n%10);
        n = n/10;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a five digit number: ");
    scanf("%5d", &num);
    printf("The Sum of Digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}