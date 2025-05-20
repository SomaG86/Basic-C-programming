#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the Chracter : ");
    scanf("%c", &ch);

    printf("previous character is %c ", ch - 1);
    printf("\nNext character is %c ", ch + 1);
}