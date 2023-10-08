// Lab Program 13 : Write a C program to search a number from an array using linear search.
#include <stdio.h>

int LinearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the length of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i+1);
        scanf("%d", (arr+i));
    }
    int x;
    printf("Enter the number to be searched : ");
    scanf("%d", &x);
    int search = LinearSearch(arr, n, x);
    if (search == -1)
    {
        printf("%d was not found in the array\n", x);
    }
    else
    {
        printf("%d was found at %d index\n", x, search);
    }
    return 0;
}