// Lab Program 27: Program to demonstrate the example of an array of pointers.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int ** ptr;
    int row, col;
    printf("Enter rows of Matrix: ");
    scanf("%d", &row);
    printf("Enter columns of Matrix: ");
    scanf("%d", &col);

    ptr = (int **) malloc(row*sizeof(int*));

    for (int i = 0; i < row; i++) 
    {
        ptr[i] = (int *)malloc(col * sizeof(int));
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Element: ");
            scanf("%d", (*(ptr+i))+j);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}