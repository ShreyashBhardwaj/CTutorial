#include <stdio.h>

int main()
{
    int n = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    n = n * n * n;
    printf("The cube of the number is: %d\n", n);
    return 0;
}