// Lab Program 26: Program to pass an array as a pointer to a function that calculates the sum of all elements of the array.
#include <stdio.h>

int sumArray(int * arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = *(arr+i);
        sum+=temp;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter length of Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element: ");
        scanf("%d", arr+i);
    }
    int res = sumArray(arr, n);
    printf("Sum of Array = %d\n", res);
    return 0;
}