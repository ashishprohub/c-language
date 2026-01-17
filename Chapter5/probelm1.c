// Write a program using function to find average of three numbers.
#include <stdio.h>
    float avg(int a,int b, int c);
    float avg(int a,int b, int c){
        return (a+b+c)/3.0;    
    }

int main(){
    int a,b,c;
    printf("Enter the first number:",a);
    scanf("%d",&a);
    printf("Enter the first number:",b);
    scanf("%d",&b);
    printf("Enter the first number:",c);
    scanf("%d",&c);
    printf("The average of numbers is %f",avg(a,b,c));
    return 0;
}