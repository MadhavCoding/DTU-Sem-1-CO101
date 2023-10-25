// Lab Program 22: Write a C program to sort an array using selection sort.
#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_int = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_int])
                min_int = j;
        }
        int temp = arr[min_int];
        arr[min_int] = arr[i];
        arr[i] = temp;
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
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}