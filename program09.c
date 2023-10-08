// Lab Program 9: Write a C program to reverse a 5 digit number.
#include <stdio.h>

int reverse(int n)
{
    int rev = 0;
    for (int i = 0; i < 5; i++)
    {
        int temp = n%10;
        rev = rev*10 + temp;
        n = n/10;
    }
    return rev;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a five digit number: ");
    scanf("%5d", &num);
    printf("The Reverse of %d is %d\n", num, reverse(num));
    return 0;
}