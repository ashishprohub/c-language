// Repeat 8 using while loop.
#include <stdio.h>

int main(){
    int i;
    int j =1;
    int fact = 1;
    printf("Write number to find its factorial:",i);
    scanf("%d",&i);
    while(j<=i)
    {
        fact *=j;
        j++;
    }
    printf("Factorial of %d is %d",i,fact);
    return 0;
}