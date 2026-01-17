// Write a function to convert Celsius temperature into Fahrenheit. 
#include <stdio.h>
    float df(int c);
    float df(int c){
        return((c*9.0)/5.0)+32.0;
    }

int main(){
    int c;
    printf("Enter the temp in celsius: ",c);
    scanf("%d",&c);
    printf("Temperature in degree fahrenheit is: %f",df(c));
    return 0;
}