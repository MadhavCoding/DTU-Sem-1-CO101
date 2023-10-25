// Lab Program 21: Write a C program to sort an array using Bubble sort.
#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter an element: ");
        scanf("%d", (arr+i));
    } 
}

void printArray(int arr[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    } 
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int arr[n];
    inputArray(arr, n);
    printf("Before Sorting\n");
    printArray(arr, n);
    printf("After Sorting\n");
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}