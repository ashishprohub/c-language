// Write a program to print multiplication table of 10 in reversed order.
#include <stdio.h>

int main(){
    int m =10;
    int i;
    for(i = 10; i>=1; i--){
    printf("%d X %d = %d\n",m,i,m*i);
    }
    return 0;
}