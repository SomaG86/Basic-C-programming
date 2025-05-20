#include <stdio.h>
int main()
{
    int a, b; // a,b 2 variable
    printf("Enter 1st Number ");
    scanf("%d", &a); // accept first value
    printf("Enter 2nd Number ");
    scanf("%d", &b); // accept second value

    float AM = ((a + b) / 2);       // formula of Arithmetic mean
    float HM = ((a * b) / (a + b)); // formula of harmonic mean

    printf("%2.f is Arithmetic Mean ", AM);
    printf("\n%2.f is Harmonic Mean ", HM);
}