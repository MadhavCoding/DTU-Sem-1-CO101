// Lab Program 20: Write a C program to check if a given string is a palindrome or not.
#include <stdio.h>
#include <string.h>

int isPalindrome(char* str) {
    int length = strlen(str);
    int low=0, high = length-1;
    while (high>low)
    {
        if(str[low] != str[high])
            return 0;
        high--;
        low++;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char str[20];
    printf("Enter a string: ");
    scanf("%s", &str);
    if (isPalindrome(str))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
