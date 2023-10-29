// Lab Program 25: Program to pass and return pointer to function hence calculate the average of an array.
#include <stdio.h>
#include <stdlib.h>

float * averageArray(int * arr, int n, float * ans)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = *(arr+i);
        sum+=temp;
    }
    sum = sum/n;
    *ans = sum;
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter length of Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element: ");
        scanf("%d", arr+i);
    }
    float * ans = (float *)malloc(sizeof(float));
    ans = averageArray(arr, n, ans);
    float avg = *ans;
    printf("The average is : %0.2f\n", avg);
    return 0;
}