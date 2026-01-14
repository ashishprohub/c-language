//Write a C program to calculate area of a rectangle: 
// b. Using inputs supplied by the user. 

#include <stdio.h>

int main()
{
    int length;
    int breadth;
    printf("Enter the length of rectangle: %d", length);
    scanf("%d", &length);
    printf("Enter the breadth of rectangle: %d", breadth);
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("Area of the rectangle is: %d",area);
    return 0;
}