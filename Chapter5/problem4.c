// Write a program using recursion to calculate nth element of Fibonacci series.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);
#include <stdio.h>
    int fibonacci(int  n);
    int fibonacci(int  n){
        if( n ==1 || n == 2){
            return n-1;
        }
        return fibonacci(n-1) + fibonacci(n-2);
    }
int main(){
    int n;
    printf("Enter nth element to find:",n);
    scanf("%d",&n);
    printf("%dth element of fibonacci is :%d",n,fibonacci(n));
    return 0;
}