// Write a program to calculate the factorial of a given number using a for loop. 
#include <stdio.h>

int main(){
    int i;
    int j =1;
    int fact = 1;
    printf("Write number to find its factorial:",i);
    scanf("%d",&i);
    for(int j =1; j <= i; j++){
        fact *=j;
    }
    printf("Factorial of %d is %d",i,fact);
    return 0;
}