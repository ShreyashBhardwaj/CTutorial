#include <stdio.h>

int main()
{
    int x;
    printf("Enter a Number:\n");
    scanf("%d", &x);
    x >= 1 ? printf("Natural Number\n") : printf("Not a Natural Number\n");
    return 0;
}