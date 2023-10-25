// Lab Program 23: Write a C program to sort an array using insertion sort.
#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}