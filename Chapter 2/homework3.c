#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter another number:");
    scanf("%d", &b);
    c = (a > b);
    printf("If c = 1 then a > b, if c = 0 then a <= b\n");
    printf("c = %d\n", c);
    return 0;
}