#include <stdio.h>
int main()
{
    int u, a, t;
    printf("Enter the initil velocity= "); // accept the initial velocity
    scanf("%d", &u);
    printf("Enter the Accelaration= "); // accept the Accelaration
    scanf("%d", &a);
    printf("Enter the time = "); // accept the time
    scanf("%d", &t);

    float v = (u + a * t);
    float s = (u * t + 0.5 * a * t * t);
    printf("%2.f initial velocity", v);
    printf("\n%2.f  time taken ", s);
}