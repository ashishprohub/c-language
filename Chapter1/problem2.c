// Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.
#include <stdio.h>

int main()
{
    int radius = 6;
    int height = 10;
    printf("The area of the circle with radius %d is %f\n", radius, 3.14 * radius * radius);
    printf("Volume of the cylinder with height %d is %f\n", height, 3.14 * radius * radius * height);
    return 0;
}