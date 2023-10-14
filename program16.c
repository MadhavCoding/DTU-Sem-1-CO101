// Lab Program 16: Write a C program to perform addition and multiplication of two 3*3 matrices (2-d arrays with 3 rows and 3 columns).
#include <stdio.h>

void sumMatrix(int arr1[3][3], int arr2[3][3], int res[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void productMatrix(int arr1[3][3], int arr2[3][3], int res[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int sum=0;  
            for (int k = 0; k < 3; k++)
            {
                sum += (arr1[i][k] * arr2[k][j]);
            }
        res[i][j] = sum;
        }
    }
}

void printArray(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][3] = {11, 12, 13, 14, 15, 16, 17, 18, 19};
    int resSum[3][3];
    int resProduct[3][3];
    printf("Array 1\n");
    printArray(arr1);
    printf("Array 2\n");
    printArray(arr2);

    sumMatrix(arr1, arr2, resSum);
    printf("Sum Array\n");
    printArray(resSum);

    productMatrix(arr1, arr2, resProduct);
    printf("Product Array\n");
    printArray(resProduct);
    return 0;
}