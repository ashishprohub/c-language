// Write a program to check whether a number is divisible by 97 or not. 
#include <stdio.h>

int main(){
    int num;
    printf("Enter the num:",num);
    scanf("%d",&num);
    int remainder = num%97;
    if(remainder = 0){
        printf("The number %d is divisible by 97",num);
    } 
    else{
        printf("The number %d is not divisible by 97", num);
    }
    return 0;
}