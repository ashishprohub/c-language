// Write a recursive function to calculate the sum of first ‘n’ natural numbers. 
#include <stdio.h>
    int sum(int n);
    int sum(int n){
        return (n*(n+1))/2;
    }
int main(){
    int n;
    printf("Enter number:",n);
    scanf("%d",&n);
    printf("Sum of first %d natural number is:%d",n,sum(n));
    return 0;
}