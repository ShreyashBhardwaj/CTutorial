#include <stdio.h>

int main()
{
    int x, y, z = 0, armstrong;
    printf("Enter a Number:\n");
    scanf("%d", &x);
    armstrong = x;
    while (x != 0)
    {
        y = x % 10;
        z = z + (y * y * y);
        x = x / 10;
    }
    z == armstrong ? printf("Armstrong Number\n") : printf("Not Armstrong Nubmer\n");
    return 0;
}