/*
Write a program to find greatest of four numbers entered by the user. 
 */
#include <stdio.h>

int main(){
    int num1,num2,num3,num4;
    printf("Enter First num:",num1);
    scanf("%d",&num1);
    printf("Enter First num:",num2);
    scanf("%d",&num2);
    printf("Enter First num:",num3);
    scanf("%d",&num3);
    printf("Enter First num:",num4);
    scanf("%d",&num4);
    if(num1 > num2 & num1 > num3 & num1 > num4){
        printf("The num %d is the greatest.",num1);
    }
    else if(num2 > num1 & num2 > num3 & num2 > num4){
        printf("The num %d is the greatest.", num2);
    }
    else if(num3 > num1 & num3 > num2 & num3 > num4){
        printf("The num %d is the greatest.", num3);
    }
    else if(num4 > num1 & num4 > num2 & num4 > num3){
        printf("The num %d is the greatest.", num4);
    }
    return 0;
}