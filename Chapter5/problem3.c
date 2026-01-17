/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
earth. Consider g = 9.8m/s2. */
// F = m.a
#include <stdio.h>
    float force(int m);
    float force(int m){
        return m*9.8;
    }
int main(){
    int m;
    printf("Enter the mass of body(in Kg): ",m);
    scanf("%d",&m);
    printf("Force exerted on mass %d Kg is %f N",m,force(m));
    return 0;
}
