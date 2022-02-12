#include <stdio.h>
int main() {
    int radius;
    double diameter,circumference,area;
    printf("Enter radius of circle :");
    scanf("%d", &radius);
    diameter = radius * 2;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);
    printf("Diameter : %f \n" , diameter);
    printf("Circumference : %f \n", circumference);
    printf("Area : %f", area);
    return 0;


}