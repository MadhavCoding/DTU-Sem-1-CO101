// Lab Program 15: Write a C program to find sum of an input array of integers using recursion.
#include <stdio.h>

int sumOfArray(int arr[], int n)
{
    if (n==1)
    {
        return arr[n-1];
    }
    return arr[n-1] + sumOfArray(arr, n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Size of Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }
    int sum = sumOfArray(arr, n);
    printf("Sum = %d\n", sum);
    return 0;
}