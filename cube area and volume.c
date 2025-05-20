#include <stdio.h>
int main()
{
    int l, b, h;                           // L= Length ,b = breadth,h=height
    printf("Enter the length of cuboid "); // accept the length
    scanf("%d", &l);
    printf("Enter the breadth = "); // accept the breadth
    scanf("%d", &b);
    printf("Enter the height  = "); // accept the height
    scanf("%d", &h);

    float surfacearea = (2 * (l * b + b * h + l * h)); // formula of surface area
    float volume = (l * b * h);                        // formula of volume
    printf("%2.f surface area of cuboid", surfacearea);
    printf("\n%2.f volume of cuboid ", volume);
}