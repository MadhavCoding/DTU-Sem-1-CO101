// Lab Program 19: Write a C program to count the number of vowels in a given string. 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter length of String: ");
    scanf("%d", &n);
    char str[n+1];
    scanf("%s", str);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
        {
            count++;
        } 
    }
    printf("No. of Vowels = %d\n", count);
    
    return 0;
}