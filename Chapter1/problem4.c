// Write a program to calculate simple interest for a set of values representing      
// principal, number of years and rate of interest.

#include <stdio.h>

int main(){
    float p,r,t;
    printf("Enter the principle amount to calculate the interest:%f",p);
    scanf("%f",&p);
    printf("Enter the rate of interest:%f",r);
    scanf("%f",&r);
    printf("Enter the time of interest:%f",t);
    scanf("%f",&t);
    float interest = (p*t*r)/100;
    printf("Interest of the amount:%f",interest);
    return 0;
}