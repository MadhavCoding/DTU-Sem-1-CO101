// Lab Program 7: Write a C program to find whether the entered number is prime.
#include <stdio.h>

int isPrime(int n)
{
    if (n<2)
    {
        return 0;
    }
    
    if (n==2 || n==3)
    {
        return 1;
    }
    
    else if (n%2==0 || n%3==0)
    {
        return 0;
    }
    
    for (int i = 5; i*i <= n; i=i+6)
    {
        if (n%i==0 || n%(i+2)==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int prime;
    printf("Enter a number: ");
    scanf("%d", &prime);
    int result = isPrime(prime);
    if (result)
    {
        printf("The number %d is a prime number\n", prime);
    }
    else
    {
        printf("The number %d is not a prime number\n", prime);
    }
    return 0;
}