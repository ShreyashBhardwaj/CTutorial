#include <stdio.h>

int main()
{
    char a;
    int x;
    printf("Enter a character: ");
    scanf("%c", &a);
    printf("If the character is a digit then the answer will be 1 if not 0\n");
    printf("The answer is %d\n", x = (a >= '0' && a <= '9'));
}