#include <stdio.h>
int main()
{
    int f;
    printf("Enter the Fahrenheit = "); // accept the fahrenheit
    scanf("%d", &f);

    float c = ((0.555) * (f - 32)); // formula of celcius
    float k = (c + 273.15);         // formula of kelvin
    printf("%2.f is temperature in celcius ", c);
    printf("\n%2.f is temperature in kelvin ", k);
}