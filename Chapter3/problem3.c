/*
Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
                        Income slab         Tax
                        2.5 - 5.0 L         5%
                        5.0L - 10.0L        20%
                        Above 10.0L         30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/
#include <stdio.h>

int main(){
    float income;
    printf("Enter your income in Lakhs to find in which Tax you lie: ",income);
    scanf("%f",&income);
    if(income < 2.5){
        printf("You are in no tax slab");
    }
        else if(income >= 2.5 && income < 5){
            printf("You are under 5%% tax slab");
        }
        else if(income >= 5 && income < 10){
            printf("You are under 20%% tax slab");
        }
        else{
            printf("You are under 30%% tax slab");
        }
    return 0;
}