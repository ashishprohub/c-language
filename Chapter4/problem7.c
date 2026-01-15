/*
Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/
#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    int j;
    printf("Enter the number whose sum of table to find:",j);
    scanf("%d",&j);
    // for(int i =1; i <= 10; i++){
    //     sum +=i;
    // }
    // or
    for( int i=1; i<=10; i++){
        sum += (j*i);
    }
    printf("Sum of table of %d is %d",j,sum);
    // printf("Sum of table of %d is %d",j,sum*j);
    return 0;
}