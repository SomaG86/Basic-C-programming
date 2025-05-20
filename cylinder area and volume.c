#include<stdio.h>
int main()
{
    int h , r;//r = radius ,h = height
    float pi = 3.14 ;// value of pi
    printf("Enter the radius = ");
    scanf("%d",&r); // accept the value of radius
    printf("Enter the height =");
    scanf("%d",&h);//accept the value of height
    float surfacearea =( 2*(pi*r*r) + (2*pi*(r*h)));
    float volume = (pi*(r*r)*h);
    printf("%.2f is surface area : \n",surfacearea);
    printf("%.2f is volume :  ", volume);


}