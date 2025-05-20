#include <stdio.h>
int main()
{
    int r1, r2; // r1 = inner radius ,r2 =outer radius;
    float pi = 3.14;
    printf("Enter the inner radius = ");
    scanf("%d", &r1); // accept the value of inner radius
    printf("Enter the outer radius =");
    scanf("%d", &r2); // accept the value of outer radius

    float peri = (2 * pi * (r1 + r2));       // formula for perimeter of ring
    float area = (pi * (r2 * r2 - r1 * r1)); // formula for area of ring
    printf("%.2f is area of ring : \n", area);
    printf("%.2f is perimeter of ring :  ", peri);
}