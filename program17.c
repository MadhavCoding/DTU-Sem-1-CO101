// Lab Program 17: Write a C program to swap two numbers using pointers.
#include <stdio.h>

int swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter 2 nums: ");
    scanf("%d %d", &a, &b);
    printf("Before Swapping\n");
    printf("a = %d b = %d\n", a, b);
    printf("After Swapping\n");
    swap(&a, &b);
    printf("a = %d b = %d\n", a, b);
    return 0;
}