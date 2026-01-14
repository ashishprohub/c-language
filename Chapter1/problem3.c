// Write a program to convert Celsius (Centigrade degrees temperature to 
// Fahrenheit). 
#include <stdio.h>

int main(){
    int celsius;
    printf("Enter temperature in celsius to convert into  fahrenheit: ", celsius);
    scanf("%d",&celsius);
    float fahrenheit = (9 * celsius)/5 +32 ;
    printf("Temperature in Fahrenheit:%f",fahrenheit);
    return 0;
}