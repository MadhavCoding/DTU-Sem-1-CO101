// Lab Program 12 : Write a C program to generate the Fibonacci sequence.
#include <stdio.h>

void fibonacci(int n)
{
    int t1, t2;
    t1=t2=1;
    if (n==0)
    {
        printf("%d", t1);
        return;
    }
    else if (n==1)
    {
        printf("%d %d ", t1, t2);
        return;
    }
    printf("%d %d ", t1, t2);
    for (int i = 2; i <= n; i++)
    {
        int t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci Sequence is :-\n");
    fibonacci(num);
    return 0;
}