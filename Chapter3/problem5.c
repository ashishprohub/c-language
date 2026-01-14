/*
Write a program to determine whether a character entered by the user is
lowercase or not.

This question is basically based on ASCII Value concept in which the value of characters
in range for lower case letters a to z is from 97 to 122
*/
#include <stdio.h>

int main()
{
    char lower;
    printf("Enter the character:", lower);
    scanf("%c", &lower);
    printf("The value of char %d\n", lower);
    if (lower >= 97 && lower <= 122)
    {
        printf("The character %c is lower case ", lower);
    }
    else
    {
        printf("The character is not lower case");
    }

    return 0;
}