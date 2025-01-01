#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter another number:");
    scanf("%d", &b);
    printf("Enter a third number:");
    scanf("%d", &c);
    printf("The avg of the 3 numbers is %.2f\n", (a, b, c) / 3.0);
    return 0;
}