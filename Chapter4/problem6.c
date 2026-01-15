// Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
#include <stdio.h>

int main(){
    int i =1;
    int sum = 0;
    for( i =1; i <= 10; i++){
        sum +=i;
    }
    printf("Sum of first ten natural numbers is %d",sum);
    // For do while
    // int i =1;
    // int sum =0;
    // do{
    //     sum += i;
    //     i ++;
    // }
    // while( i <= 10);
    // printf("Sum od first ten natural numbers is %d",sum);
    return 0;
}