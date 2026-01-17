// // What will the following line produce in a C program: 
// int a = 4; 
// printf("%d %d %d \n", a, ++a, a++); 
// 4,5,5 (Because evaluation order is not defined here so compiler automatically determined the order
// that is right to left therefore showing there 6,6,4
#include <stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++); 
    return 0;
}