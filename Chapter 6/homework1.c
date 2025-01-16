#include <stdio.h>

int main()
{
    int a, b, *p, *q;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;
    if (*p > *q)
    {
        printf("%d is greater than %d\n", *p, *q);
    }
    else
    {
        printf("%d is greater than %d\n", *q, *p);
    }
}