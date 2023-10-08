// Lab Program 11: Write a C program to implement the switch case statement.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a 1 digit number: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("one\n");
        break;
    
    case 2:
        printf("two\n");
        break;

    case 3:
        printf("three\n");
        break;

    case 4:
        printf("four\n");
        break;

    case 5:
        printf("five\n");
        break;

    case 6:
        printf("six\n");
        break;

    case 7:
        printf("seven\n");
        break;

    case 8:
        printf("eight\n");
        break;

    case 9:
        printf("nine\n");
        break;

    case 0:
        printf("zero\n");
        break;

    default:
        printf("Enter a 1 digit number");
        break;
    }
    return 0;
}