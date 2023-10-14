// Lab Program 14: Write a C program to input a random array of integers and reverse the same array and print it.
#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int n)
{
    int high = n-1;
    int low = 0;
    while (high>low)
    {
        swap(arr+low, arr+high);
        low++;
        high--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
    printf("Before Reversing\n");
    printArray(arr, n);
    printf("After Reversing\n");
    reverse(arr, n);
    printArray(arr, n);
    return 0;
}