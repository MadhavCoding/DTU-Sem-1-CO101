// Lab Program 10: Write a C program to convert decimal to binary and vice versa.
#include <stdio.h>

void DecimalToBinary(int n)
{
    if (n==1)
    {
        printf("%d", 1);
        return;
    }
    DecimalToBinary(n/2);
    printf("%d", n%2);
}

int main(int argc, char const *argv[])
{
    int decimal;
    printf("Enter a number: ");
    scanf("%d",&decimal);
    DecimalToBinary(decimal);
    return 0;
}