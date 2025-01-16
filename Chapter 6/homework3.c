#include <stdio.h>

int main()
{
    char ch = 'a';
    char *p = &ch;
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", *p);
        (*p)++;
    }
}